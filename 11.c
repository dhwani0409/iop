#include<stdio.h>

int main()
{
    int sec,hr,min,s,ls;
    printf("enter the number of seconds:\n");
    scanf("%d",&sec);
    hr=sec/3600;
    ls=sec%3600;
    min=ls/60;
    ls=ls%60;
    s=ls;
    printf("the time is %d:%d:%d",hr,min,s);
    return 0;
}