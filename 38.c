#include<stdio.h>

int main()
{
    int n,i;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d\t",i*i);
    }
    return 0;
}