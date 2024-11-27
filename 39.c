#include<stdio.h>

int main()
{
    float n,f,i,sum=0,j;
    printf("enter the value of n:\n");
    scanf("%f",&n);
    for(i=1; i<=n; i++){
        f=1;
        for(j=1; j<=i; j++){
            f=f*j;
        }
        sum=sum+i/f;
    }
    printf("%f",sum);
    return 0;
}