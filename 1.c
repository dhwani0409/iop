//program to calculate simple interest

#include<stdio.h>

int main()
{
    float p,r,t,si;
    printf("enter the value of principle,rate and time:\n");
    scanf("%f %f %f",&p,&r,&t);
    si=p*r*t/100;
    printf("the simple interest is %f",si);
    return 0;

}