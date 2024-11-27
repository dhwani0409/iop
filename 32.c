#include<stdio.h>

int main()
{
    int n,max=0,sec_max,i,a;
    printf("enter the number n:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("enter the number a:\n");
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
    }
    printf("max number is %d",max);
    return 0;

}