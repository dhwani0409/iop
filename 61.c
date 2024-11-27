#include<stdio.h>

int main()
{
    int a[5],i,j,v;
    for(i=0; i<5; i++){
        printf("enter the numbers:\n");
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(a[j]>a[j+1]){
                v=a[j];
                a[j]=a[j+1];
                a[j+1]=v;
            }
        }
    }
    for(j=0; j<5; j++){
        printf("%d",a[j]);
    }
    return 0;
}