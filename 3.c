// program to calculate gross salary

#include<stdio.h>

int main()
{
    int income,bonus,medical,gross;
    printf("enter the amout of income,bonus and medical:\n");
    scanf("%d %d %d",&income,&bonus,&medical);
    gross=income+bonus+medical;
    printf("the gross income is %d",gross);
    return 0;
}