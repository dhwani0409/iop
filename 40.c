#include<stdio.h>

int main()
{
    int i=1,sum=0,a;
    while(a>=0){
        printf("enter the number:\n");
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    sum=sum-a;
    printf("%d",sum);
    return 0;
}