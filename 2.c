//program to read marks of 5 subject and cal total and percent

#include<stdio.h>

int main()
{
    float maths,sci,eng,hindi,guj,total,percent;
    printf("enter the marks scored in maths sci eng hindi and guj:\n");
    scanf("%f %f %f %f %f",&maths,&sci,&eng,&hindi,&guj);
    total=maths+sci+hindi+eng+guj;
    percent=total/5;
    printf("total=%f and percent=%f",total,percent);
    return 0;

}