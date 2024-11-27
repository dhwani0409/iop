#include<stdio.h>

int main()
{
    int n,max=0,min,i,a;
    printf("enter the number n:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("enter the number a:\n");
        scanf("%d",&a);
        if(a>max){
            max=a;
            min=max;
        }
        if(a<min){
            min=a;
        }
    }
    printf("max number is %d and min is %d",max,min);
    return 0;

}