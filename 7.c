//to cal area of triangle

#include<stdio.h>

int main()
{
    float b,h,a;
    printf("enter the height and base of triangle:\n");
    scanf("%f %f",&h,&b);
    a=b*h/2;
    printf("area is %f",a);
    return 0;

}