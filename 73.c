#include<stdio.h>

int main()
{
    int a[10],i,t1=0,t2=0,t3=0,t4=0,t5=0,sb=0;
    for(i=0; i<10; i++){
        printf("enter the candidate number you want to vote for from 1-5:\n");
        scanf("%d",&a[i]);
        if(a[i]==1){
            t1+=1;
        } else if(a[i]==2){
            t2+=1;
        } else if(a[i]==3){
            t3+=1;
        } else if(a[i]==4){
            t4+=1;
        } else if(a[i]==5){
            t5+=1;
        } else{
            sb+=1;
            printf("spoilt ballot\n");
        }
    }
    printf("the number of votes for candidate 1=%d, candidate 2=%d, candidate 3=%d, candidate 4=%d, candidate 5=%d and spoilt ballot=%d",t1,t1,t3,t4,t5,sb);
    return 0;
}