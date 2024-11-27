#include<stdio.h>

int main()
{
    int i,sum=0,integer[10];
    for(i=0; i<=9; i++){
        printf("enter number a: \n");
        scanf("%d",&integer[i]);
        sum=sum+integer[i];
    }
    printf("%d",sum);
    return 0;
}