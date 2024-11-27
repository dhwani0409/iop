//function to find if a number is even or odd
#include<stdio.h>

int odd(int num){
    if(num%2==0){
        printf("number is even\n");
    } else{
        printf("number is odd\n");
    }
}
int main(){
    int num;
    printf("enter the value of num\n");
    scanf("%d",&num);
    printf("%d" , odd(num));
    return 0;
}

