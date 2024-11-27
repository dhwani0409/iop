#include<stdio.h>

int main()
{
    int a[3][3],i,j,max,min;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("enter the numbers of matrix:\n");
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    min=a[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("max element is %d and min element is %d",max,min);
    return 0;
}