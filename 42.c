#include<stdio.h>

int main()
{
    int n,i,count=0;
    printf("enter the number n:\n");
    scanf("%d",&n);
    for(i=2; i<n; i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(n!=1){
    if(count>0){
        printf("number is composite");
    }
    else{
        printf("number is prime");
    }
    }
    if(n=1){
        printf("number is neither prime nor composite");
    }
    return 0;
}