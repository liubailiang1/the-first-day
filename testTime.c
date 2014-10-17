#if 0
结构体  struct tm是系统日历时间结构体
struct tm {
int tm_sec; /* 秒–取值区间为[0,59] */
int tm_min; /* 分 - 取值区间为[0,59] */
int tm_hour; /* 时 - 取值区间为[0,23] */
int tm_mday; /* 一个月中的日期 - 取值区间为[1,31] */
int tm_mon; /* 月份（从一月开始，0代表一月） - 取值区间为[0,11] */
int tm_year; /* 年份，其值从1900开始 */
int tm_wday; /* 星期–取值区间为[0,6]，其中0代表星期天，1代表星期一，以此类推 */
int tm_yday; /* 从每年的1月1日开始的天数–取值区间为[0,365]，其中0代表1月1日，1代表1月2日，以此类推 */
int tm_isdst; /* 夏令时标识符，实行夏令时的时候，tm_isdst为正。不实行夏令时的进候，tm_isdst为0；不了解情况时，tm_isdst()为负。*/
long int tm_gmtoff; /*指定了日期变更线东面时区中UTC东部时区正秒数或UTC西部时区的负秒数*/
const char *tm_zone; /*当前时区的名字(与环境变量TZ有关)*/
};
#endif
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main (void)
 { 
   struct tm *local;
    time_t t;
    
    t=time(NULL);
    local=localtime(&t);
    printf("local hour is :%d:%d:%d\n",local->tm_hour,local->tm_min,local->tm_sec);
    printf("local hour is :%d:%d:%d\n",local->tm_mday,local->tm_mon,local->tm_year);
    printf("local hour is :%d:%d:%d\n",local->tm_wday,local->tm_yday,local->tm_isdst);
    printf("local hour is :%ld:%ld",local->tm_gmtoff,local->tm_zone);
  return 0; 
 }                        
#if 0
root@Ubuntu32:/home/zhangbin/alex/codeStore/testCODE/testC# ./testTime 
local hour is :11:18:49
local hour is :14:7:114
local hour is :4:225:0
local hour is :28800:163536992root@Ubuntu32:/home/zhangbin/alex/codeStore/testCODE/testC# 

#endif
