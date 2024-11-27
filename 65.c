#include<stdio.h>

int main()
{
    int a[3][3],i,j,t;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("enter the numbers of matrix:\n");
            scanf("%d",&a[i][j]);
        }
    }
    t=a[0][0]+a[1][1]+a[2][2];
    printf("the transpose is %d",t);
    return 0;
}