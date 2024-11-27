#include<stdio.h>

int main()
{
    int count,i,a;
    printf("enter the number a:\n");
    scanf("%d",&a);
    for(i=2; i<a; i++){
        if(a%i==0){
            count+=1;
        }
    }
    if(count>0){
        printf("number is not prime");
    } else{
        printf("number is prime");
    }
    return 0;
}