#include<stdio.h>

int main()
{
    int integer[10],i,pve=0,nve=0,zero=0;
    for(i=0; i<=9; i++){
        printf("enter the number a: \n");
        scanf("%d",&integer[i]);
        if(integer[i]>0){
            pve=pve+1;
        } else if(integer[i]<0){
            nve=nve+1;
        } else{
            zero=zero+1;
        }
    }
    printf("positive are %d negative are %d and zero are %d",pve,nve,zero);
    return 0;
}