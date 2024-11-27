//program to swap two variables using third variable

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    b=a;
    a=c-a;
    printf("%d\n%d",a,b);
    return 0;
}