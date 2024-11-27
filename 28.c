#include<stdio.h>

int main()
{
    int n,num,rem,rev=0;
    printf("enter the number n:\n");
    scanf("%d",&n);
    num=n;
    while(n!=0){
        rem=n%10;
        rev=rev+rem*rem*rem;
        n=n/10;
    }
    if(rev==num){
        printf("number is armstrong");
    } else{
        printf("number is not armstrong");
    }
    return 0;
}