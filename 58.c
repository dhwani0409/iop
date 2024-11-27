#include<stdio.h>

int main()
{
    int a[10],b[10],c[10],i;
    for(i=0; i<10; i++){
        printf("enter the elements of a \n");
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
        printf("enter the elements of b\n");
        scanf("%d",&b[i]);
    }
    for(i=0; i<10; i++){
        c[i]=b[i]+a[i];
        printf("%d",c[i]);
    }
    return 0;
}