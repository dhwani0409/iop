#include<stdio.h>

int main()
{
    int y,x,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    if(n==1){
        printf("y=1+x");
    } else if(n==2){
        printf("y=1+x/%d",n);
    } else if(n==3){
        printf("y=1+x^%d",n);
    } else{
        printf("y=1+%dx",n);
    }
    return 0;
}
