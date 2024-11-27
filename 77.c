//function to check if a number is palindrome or not
#include<stdio.h>

void palin(int n){
    int a,rem,rev=0;
    a=n;
    while(n>0){
    rem=n%10;
    rev=rem+(rev*10);
    n=n/10;
    }
    if(rev==a){
        printf("number is palindrome");
    } else{
        printf("number is not a palindrome");
    }
}
int main(){
    int n;
    printf("enter the number n\n");
    scanf("%d",&n);
    palin(n);
    return 0;
}