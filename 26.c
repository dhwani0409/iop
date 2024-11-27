#include<stdio.h>

int main()
{
    int i,n,even_sum=0,odd_sum=0;
    printf("enter the number n:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i+=2){
        odd_sum+=i;
    }
    for(i=2; i<=n; i+=2){
        even_sum+=i;
    }
    printf("sum of even number is %d and odd numbers is %d",even_sum,odd_sum);
    return 0;
}