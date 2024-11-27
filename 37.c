#include<stdio.h>

int main()
{
    int i,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=2; i<=n; i+=2){
        printf("%d\t",i);
    }
    return 0;
}