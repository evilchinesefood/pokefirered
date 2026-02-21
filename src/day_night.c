#include "global.h"
#include "day_night.h"
#include "rtc.h"
#include "palette.h"
#include "constants/rgb.h"
#include "event_data.h"

// Tints for different times of day
static const struct DayNightTint sDayNightTints[] = {
    [DN_TIME_NIGHT] = { .r = 100, .g = 100, .b = 180 }, // Cooler, darker
    [DN_TIME_DAWN]  = { .r = 200, .g = 180, .b = 150 }, // Warmer
    [DN_TIME_DAY]   = { .r = 255, .g = 255, .b = 255 }, // Normal
    [DN_TIME_DUSK]  = { .r = 220, .g = 150, .b = 120 }, // Orange tint
};

u8 GetCurrentTimeOfDay(void)
{
    struct SaneRtcTime time;
    RtcGetTime(&time);
    
    if (time.hour >= 20 || time.hour < 6)
        return DN_TIME_NIGHT;
    if (time.hour >= 6 && time.hour < 10)
        return DN_TIME_DAWN;
    if (time.hour >= 10 && time.hour < 17)
        return DN_TIME_DAY;
    
    return DN_TIME_DUSK;
}

void ApplyDayNightTint(u16 *src, u16 *dest, u16 size)
{
    u8 timeOfDay;
    const struct DayNightTint *tint;
    u16 i;

    if (!FlagGet(FLAG_DAY_NIGHT_ENABLED))
    {
        if (src != dest)
            CpuCopy16(src, dest, size * sizeof(u16));
        return;
    }

    timeOfDay = GetCurrentTimeOfDay();
    if (timeOfDay == DN_TIME_DAY)
    {
        if (src != dest)
            CpuCopy16(src, dest, size * sizeof(u16));
        return;
    }

    tint = &sDayNightTints[timeOfDay];

    for (i = 0; i < size; i++)
    {
        u16 color = src[i];
        u8 r = GET_R(color);
        u8 g = GET_G(color);
        u8 b = GET_B(color);

        r = (r * tint->r) / 255;
        g = (g * tint->g) / 255;
        b = (b * tint->b) / 255;

        dest[i] = RGB2(r, g, b);
    }
}
