//function to check if a number is armstrong or not
#include<stdio.h>

int arms(int n){
    int rem,sum=0,a;
    a=n;
    while(n>0){
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
    }
    if(sum==a){
        printf("number is armstrong");
    } else{
        printf("number is not armstrong");
    }
}
int main()
{
    int n;
    printf("enter the number n:\n");
    scanf("%d",&n);
    arms(n);
    return 0;
}