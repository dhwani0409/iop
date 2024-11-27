//program to find digits 
#include<stdio.h>

int main()
{
    int t,n,i,original,digit,count,j;
    printf("enter the number of test cases:\n");//taking input for number of cases
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        printf("enter the value of n:\n");//taking input of the numbers whose divisibility is to be checked
        scanf("%d",&n);
        original=n;
        count=0;
        while(n!=0){
        digit=n%10;
        //checking the divisibility of number by its digits
        if(digit!=0 && original%digit==0){
            count+=1;
        }
        n=n/10;
        }
        printf("%d\n",count);
    }
    return 0;
}