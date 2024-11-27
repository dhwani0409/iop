#include<stdio.h>

int main()
{
    int a[]={1,3,5};
    int b[]={2,4,6};
    int c[6],i,j,v;
    for(i=0; i<3; i++){
        c[i]=a[i];
    }
    for(i=3; i<6; i++){
        c[i]=b[i-3];
    }
    for(i=0; i<6; i++){
        for(j=i+1; j<6; j++){
            if(c[i]>c[j]){
                v=c[i];
                c[i]=c[j];
                c[j]=v;
            }
        }
    }
    for(i=0; i<6; i++){
        printf("%d",c[i]);
    }
    return 0;
}