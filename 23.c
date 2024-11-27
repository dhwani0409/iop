#include<stdio.h>

int main()
{
    int a,n,p,ans=1;
    printf("enter the number a and power p:\n");
    scanf("%d %d",&a,&p);
    for(n=1; n<=p; n++){
        ans=ans*a;
    }
    printf("the number %d raised to power %d is %d",a,p,ans);
    return 0;
}