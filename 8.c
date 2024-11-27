//to convert seconds into days hours and minutes

#include<stdio.h>

int main()
{
    int s=31558150,days,hours,minutes,ls,sec;
    days=s/(3600*24);
    ls=s%(3600*24);
    hours=ls/3600;
    ls=ls%3600;
    minutes=ls/60;
    sec=ls%60;
    printf("days=%d,hours=%d,minutes=%d,sec=%d",days,hours,minutes,sec);
    return 0;
}