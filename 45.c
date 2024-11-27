#include<stdio.h>

int main()
{
    int i,a=4,no;
    for(i=1; i<=100; i++){
    printf("enter number no: \n");
    scanf("%d",&no);
    if(no==a){
        printf("the number is the lucky number");
        break;
    }
    }
    return 0;
}