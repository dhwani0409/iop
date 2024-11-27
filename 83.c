//function to read an array and find maximum
#include<stdio.h>

void max(void){
    int i,max;
    char arr[5];
    for(i=0; i<5; i++){
        printf("enter the number %d",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1; i<5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("max number is %d",max);

}
int main(){
    max();
    return 0;
}