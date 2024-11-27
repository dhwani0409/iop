#include<stdio.h>

int main()
{
    int m,p,c,e,cm;
    printf("enter the marks in maths phy chem and entrance exam out of 200:\n");
    scanf("%d %d %d %d",&m,&p,&c,&e);
    cm=m/2+p/2+c/2+e;
    printf("the cut of marks are %d",cm);
    return 0;
}