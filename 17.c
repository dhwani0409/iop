#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the numbers a b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is max");
    } else if(b>a && b>c){
        printf("b is max");
    } else{
        printf("c is max");
    }
    return 0;
}