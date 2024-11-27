#include<stdio.h>

int main()
{
    int a,f=1,i;
    printf("enter the number a:\n");
    scanf("%d",&a);
    for(i=1; i<=a; i++){
        f=f*i;
    }
    printf("factorial of %d is %d",a,f);
    return 0;
}