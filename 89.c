#include<stdio.h>

int main(){
    int arr1[3]={1,2,3};
    int arr2[3];
    int* arr1ptr=arr1;
    int* arr2ptr=arr2;
    for(int i=0; i<3; i++){
        *(arr2ptr+i)=*(arr1ptr+2-i);
    }
    for(int i=0; i<3; i++){
        printf("%d\n",arr2[i]);
    }
    return 0;
}