#include<stdio.h>

int main()
{
    int hr,min,sec,total_sec;
    printf("enter the number of hrs minutes and seconds:\n");
    scanf("%d %d %d",&hr,&min,&sec);
    total_sec=hr*3600+min*60+sec;
    printf("total second is %d",total_sec);
    return 0;
}