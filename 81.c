//function if prime then returns 1 nd not then 0
#include<stdio.h>

int prime(int n){
    int i,count=0;
    for(i=2; i<n; i++){
        if(n%2==0){
            count+=1;
        }
    }
    if(count==0){
        return 1;
    } else{
        return 0;
    }
}
int main()
{
    int n;
    printf("enter the number n:\n");
    scanf("%d",&n);
    printf("%d",prime(n));
    return 0;
}