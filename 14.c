#include<stdio.h>

int main()
{
    char c;
    printf("enter the character c:\n");
    scanf("%c",&c);
    if(c>=97 && c<=122){
        printf("the character is small case letter\n");
    } else if(c>=65 && c<=90){
        printf("the character is capital letter\n");
    } else if(c>='0' && c<='9'){
        printf("the character is a number\n");
    } else{
        printf("the entered character is a special character");
    }
   return 0;
}