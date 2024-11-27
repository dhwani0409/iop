#include<stdio.h>

int main()
{
    int even=0,odd=0,i,integer[10];
    for(i=0; i<=9; i++){
        printf("enter the number a: \n");
        scanf("%d",&integer[i]);
        if(integer[i]%2==0){
            even=even+1;
        } else{
            odd=odd+1;
        }
    }
    printf("even numbers are %d and odd numbers are %d",even,odd);
    return 0;
}