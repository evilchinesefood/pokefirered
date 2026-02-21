#ifndef GUARD_DAY_NIGHT_H
#define GUARD_DAY_NIGHT_H

enum {
    DN_TIME_NIGHT,
    DN_TIME_DAWN,
    DN_TIME_DAY,
    DN_TIME_DUSK,
};

struct DayNightTint {
    u16 r, g, b;
};

u8 GetCurrentTimeOfDay(void);
void ApplyDayNightTint(u16 *src, u16 *dest, u16 size);

#endif // GUARD_DAY_NIGHT_H
