#include<stdio.h>

int main()
{
    int n,rev=0,rem,num;
    printf("enter the number n:\n");
    scanf("%d",&n);
    num=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==num){
        printf("number is palindrome");
    } else{
        printf("number is not palindrome");
    }
    return 0;
}
