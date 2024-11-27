//function to swap two variables
#include<stdio.h>

void exchange(int x, int y){
    int c;
    c=x;
    x=y;
    y=c;
    printf("after interchanging the numbers are x=%d and y=%d",x,y);
}
int main(){
    int x,y;
    printf("enter the value of x and y:\n");
    scanf("%d %d",&x,&y);
    exchange(x,y);
    return 0;
}