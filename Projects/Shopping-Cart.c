#include <stdio.h>
int main()
{
    char item[50];
    float price;
    int quantity;
    float total;
    printf("What would you like to order? : ");
    scanf("%s",&item);
    printf("What is the price of your item? : ");
    scanf("%f",&price);
    printf("How many do you want? : ");
    scanf("%d",&quantity);
    total=price*quantity;
    printf("You have bought %d %s/s\n",quantity,item);
    printf("Your total is : $%.2f",total);
    return 0;
}
