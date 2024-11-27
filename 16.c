#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the numbers a b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(b>c){
            printf("%d is max",a);
        }
        else if(a>c){
            printf("%d is max",a);
        } else{
            printf("%d is max",c);
        }
    } else{
        if(a>c){
            printf("%d is max",b);
        } else if(b>c){
            printf("%d is max",b);
        } else{
            printf("%d is max",c);
        }
    }
    return 0;
}