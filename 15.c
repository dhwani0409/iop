#include<stdio.h>

int main()
{
    int a,b,c,d,e,sum;
    printf("enter the marks scored in a,b,c,d and e out of 100:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    if(sum>450){
        printf("grade is a");
    } else if(sum>400 && sum<=450){
        printf("grade is b"); 
    } else{
        printf("fail");
    }
    return 0;
}