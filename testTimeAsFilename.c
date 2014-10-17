
//我都给你写好函数了，贴心吧！ 

#include<sys/time.h> 
void getCurrTime(char* timestr,char* fmt) 
{   
time_t  ticks; 
struct tm *t; 

ticks = time(0); 
t= localtime(&ticks); 
    strftime(timestr,127,fmt,t);//Y%为四位年份 
} 


#if 0
使用： 
char logFileDate[10]; 
getCurrTime(logFileDate,"%Y-%m-%d");//设置日志文件日期
#endif

#ifdef OLD
void main(){
    char logFileDate[10]; 
    getCurrTime(logFileDate,"%Y_%m_%d");//设置日志文件日期,year month day
	int i;
	for(i=0;i<10;i++)
	     printf("%c",logFileDate[i]);
}
#endif
/*
%a 星期几的简写
%A 星期几的全称
%b 月份的简写
%B 月份的全称
%c 标准的日期的时间串
%C 年份的后两位数字
%d 十进制表示的每月的第几天
%D 月/天/年
%e 在两字符域中，十进制表示的每月的第几天
%F 年-月-日
%g 年份的后两位数字，使用基于周的年
%G 年份，使用基于周的年
%h 简写的月份名
%H 24小时制的小时
%I 12小时制的小时
%j 十进制表示的每年的第几天
%m 十进制表示的月份
%M 十时制表示的分钟数
%n 新行符
%p 本地的AM或PM的等价显示
%r 12小时的时间
%R 显示小时和分钟：hh:mm
%S 十进制的秒数
%t 水平制表符
%T 显示时分秒：hh:mm:ss
%u 每周的第几天，星期一为第一天 （值从1到7，星期一为1）
%U 第年的第几周，把星期日作为第一天（值从0到53）
%V 每年的第几周，使用基于周的年
%w 十进制表示的星期几（值从0到6，星期天为0）
%W 每年的第几周，把星期一做为第一天（值从0到53）
%x 标准的日期串
%X 标准的时间串
%y 不带世纪的十进制年份（值从0到99）
%Y 带世纪部分的十制年份
%z，%Z 时区名称，如果不能得到时区名称则返回空字符。
*/
#include<stdio.h>
//#include<time.h>
#include<string.h>
 
struct tm * GetCurrTimeAtom()
{
    time_t lt;
    time(&lt);
    return localtime(&lt);
}
 
 
int main( void )
{
    struct tm *newtime;
    char tmpbuf[128];
 
    newtime=GetCurrTimeAtom();
    strftime(tmpbuf, 128, "MEZB_%Y_%m_%d__%H_%M_%S", newtime);
    printf("%s\n",tmpbuf);
    char out[256];
	char *base="/mnt/sdcard/";
	printf("-----strcpy----\n");
    strcpy(out,base);
	printf("-----strcat----\n");
    strcat(out,tmpbuf);
printf("%s\n",out);
    return 0;
}

