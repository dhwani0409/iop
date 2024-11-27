#include<stdio.h>

int main()
{
    int s,c;
    printf("enter the amount of sales:\n");
    scanf("%d",&s);
    if(s>=0 && s<=500){
        c=s/20;
    } else if(s>500 && s<=2000){
        c=35+((s-500)/10);
    } else if(s>2000 && s<=5000){
        c=185+(12*(s-2000)/100);
    } else {
        c=12.5*s/100;
    }
    printf("the commission is Rs-%d",c);
    return 0;
}