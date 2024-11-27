#include<stdio.h>

int main()
{
    int a[5],i,j,v;
    for(i=0; i<5; i++){
        printf("enter the number:\n");
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++){
        for(j=i+1; j<=5; j++){
            if(a[i]>a[j]){
                v=a[i];
                a[i]=a[j];
                a[j]=v;
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d",a[i]);
    }
    return 0;
}