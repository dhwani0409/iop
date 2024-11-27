#include<stdio.h>

int main()
{
    int n,numbers[n],i,max,sec_max;
    printf("enter the number n: \n");
    scanf("%d",&n);
    //reading n numbers
    for(i=0; i<=n; i++){
        printf("enter the number a: \n");
        scanf("%d",&numbers[i]);
    }
    max=numbers[0];
    for(i=0; i<=n; i++){
        if(numbers[i]>max);
        max=numbers[i];
    }
    printf("%d",max);
    
    return 0;
}