#include<stdio.h>

int main()
{
    int num,i,integers[]={1,2,3,4,5,6,7,8,9,10};
    for(i=0; i<5; i++){
        num=integers[9-i];
        integers[9-i]=integers[i];
        integers[i]=num;
    }
    for(i=0; i<=9; i++){
        printf("%d\n",integers[i]);
    }
    return 0;
}