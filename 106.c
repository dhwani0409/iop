#include<stdio.h>

void input(char name[10], int q, int p){
    int amount;
    amount=q*p;
    printf("the amount is %d\n",amount);
}
struct item {
    char name[10];
    int quantity,price;
};
int main(){
    struct item s1;
    s1.name;
    s1.quantity;
    s1.price;
    printf("enter the item name\n");
    scanf("%s",&s1.name);
    printf("enter the quantity\n");
    scanf("%d",&s1.quantity);
    printf("enter the price\n");
    scanf("%d",&s1.price);
    input(s1.name,s1.quantity,s1.price);
    return 0;
}