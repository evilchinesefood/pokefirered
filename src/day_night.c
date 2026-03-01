#include "global.h"
#include "day_night.h"
#include "palette.h"
#include "rtc.h"
#include "event_data.h"
#include "global.fieldmap.h"
#include "constants/flags.h"
#include "constants/map_types.h"

// Channel scale factors (0-256, where 256 = identity / no change)
static const struct DayNightTint sDayNightTints[DN_TIME_COUNT] = {
    [DN_TIME_NIGHT] = { 150, 150, 210 },
    [DN_TIME_DAWN]  = { 240, 200, 170 },
    [DN_TIME_DAY]   = { 256, 256, 256 },
    [DN_TIME_DUSK]  = { 240, 170, 140 },
};

u8 GetCurrentTimeOfDay(void)
{
    struct SaneRtcTime time;

    RtcGetTime(&time);
    if (time.hour >= 20 || time.hour < 6)
        return DN_TIME_NIGHT;
    if (time.hour < 9)
        return DN_TIME_DAWN;
    if (time.hour < 17)
        return DN_TIME_DAY;
    return DN_TIME_DUSK;
}

const struct DayNightTint *GetDayNightTint(u8 timeOfDay)
{
    if (timeOfDay >= DN_TIME_COUNT)
        timeOfDay = DN_TIME_DAY;
    return &sDayNightTints[timeOfDay];
}

static bool8 IsOutdoorMap(void)
{
    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
        return TRUE;
    default:
        return FALSE;
    }
}

// Called from OverworldBasic() AFTER UpdatePaletteFade().
//
// Three modes:
//   Fade-out (y increasing, yDec=0): skip entirely. The screen is
//       heading to white/black and BeginNormalPaletteFade writes
//       untinted values directly to HW PLTT on frame 1 — fighting
//       that causes a flash.
//   Fade-in (y decreasing, yDec=1): blend-aware tint. Computes
//       tint(unfaded) then blends toward the fade target using the
//       same formula as BlendPalette.  At y=16 everything is the
//       blend color (no visible difference), so the tint smoothly
//       emerges as y decreases to 0.
//   No fade: apply tint directly. Identity (Day) still runs to
//       clear any previous non-Day tint from the faded buffer.
void DayNight_ApplyTint(void)
{
    const struct DayNightTint *tint;
    u16 i, raw;
    u16 r, g, b;

    if (!IsOutdoorMap())
        return;

    if (FlagGet(FLAG_DAY_NIGHT_OFF))
        return;

    tint = GetDayNightTint(GetCurrentTimeOfDay());

    if (gPaletteFade.active)
    {
        // Fade-out: skip — screen heading to solid color anyway
        if (!gPaletteFade.yDec)
            return;

        // Fade-in with identity tint: vanilla fade already correct
        if (tint->rScale == 256 && tint->gScale == 256 && tint->bScale == 256)
            return;

        // Fade-in: tint then blend toward fade target
        {
            u16 blendColor = gPaletteFade.blendColor;
            u8 coeff = gPaletteFade.y;
            s16 bR = blendColor & 0x1F;
            s16 bG = (blendColor >> 5) & 0x1F;
            s16 bB = (blendColor >> 10) & 0x1F;

            // BG palettes 0-12
            for (i = 0; i < 13 * 16; i++)
            {
                raw = gPlttBufferUnfaded[i];
                r = ((raw & 0x1F) * tint->rScale) >> 8;
                g = (((raw >> 5) & 0x1F) * tint->gScale) >> 8;
                b = (((raw >> 10) & 0x1F) * tint->bScale) >> 8;
                r += ((bR - (s16)r) * coeff) >> 4;
                g += ((bG - (s16)g) * coeff) >> 4;
                b += ((bB - (s16)b) * coeff) >> 4;
                gPlttBufferFaded[i] = (b << 10) | (g << 5) | r;
            }

            // OBJ palettes 16-31
            for (i = 16 * 16; i < 32 * 16; i++)
            {
                raw = gPlttBufferUnfaded[i];
                r = ((raw & 0x1F) * tint->rScale) >> 8;
                g = (((raw >> 5) & 0x1F) * tint->gScale) >> 8;
                b = (((raw >> 10) & 0x1F) * tint->bScale) >> 8;
                r += ((bR - (s16)r) * coeff) >> 4;
                g += ((bG - (s16)g) * coeff) >> 4;
                b += ((bB - (s16)b) * coeff) >> 4;
                gPlttBufferFaded[i] = (b << 10) | (g << 5) | r;
            }
        }
        return;
    }

    // No fade — apply tint from unfaded.
    // No identity early-return: Day (256/256/256) still writes so
    // switching from Night/Dawn/Dusk to Day clears the old tint.
    // BG palettes 0-12 (skip 13-15 which are UI/text)
    for (i = 0; i < 13 * 16; i++)
    {
        raw = gPlttBufferUnfaded[i];
        r = ((raw & 0x1F) * tint->rScale) >> 8;
        g = (((raw >> 5) & 0x1F) * tint->gScale) >> 8;
        b = (((raw >> 10) & 0x1F) * tint->bScale) >> 8;
        gPlttBufferFaded[i] = (b << 10) | (g << 5) | r;
    }

    // OBJ palettes 16-31
    for (i = 16 * 16; i < 32 * 16; i++)
    {
        raw = gPlttBufferUnfaded[i];
        r = ((raw & 0x1F) * tint->rScale) >> 8;
        g = (((raw >> 5) & 0x1F) * tint->gScale) >> 8;
        b = (((raw >> 10) & 0x1F) * tint->bScale) >> 8;
        gPlttBufferFaded[i] = (b << 10) | (g << 5) | r;
    }
}
