#include<stdio.h>

int main()
{
    int a[10],b[10],i,j,v;
    for(i=0; i<10; i++){
        printf("enter the numbers of array a:\n");
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
        printf("enter the numbers of array b:\n");
        scanf("%d",&b[i]);
    }
    for(i=0; i<10; i++){
        v=a[i];
        a[i]=b[i];
        b[i]=v;
    }
    for(i=0; i<10; i++){
        printf("%d\n",a[i]);
    }
    for(i=0; i<10; i++){
        printf("%d\n",b[i]);
    }
    return 0;
}