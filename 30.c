#include<stdio.h>

int main()
{
    int n,rem,rev=0;
    printf("enter the number n:\n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("the reverse of the number is %d",rev);
    return 0;
}