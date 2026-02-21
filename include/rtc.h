#ifndef GUARD_RTC_H
#define GUARD_RTC_H

struct SaneRtcTime
{
    u16 year;
    u8 month;
    u8 day;
    u8 dayOfWeek;
    u8 hour;
    u8 minute;
    u8 second;
};

void RtcInit(void);
void RtcGetTime(struct SaneRtcTime *time);
void RtcCalcLocalTime(void);

#endif // GUARD_RTC_H
