#ifndef GUARD_DAY_NIGHT_H
#define GUARD_DAY_NIGHT_H

enum
{
    DN_TIME_NIGHT,
    DN_TIME_DAWN,
    DN_TIME_DAY,
    DN_TIME_DUSK,
    DN_TIME_COUNT
};

struct DayNightTint
{
    u16 rScale;
    u16 gScale;
    u16 bScale;
};

u8 GetCurrentTimeOfDay(void);
const struct DayNightTint *GetDayNightTint(u8 timeOfDay);
void DayNight_ApplyTint(void);

#endif // GUARD_DAY_NIGHT_H
