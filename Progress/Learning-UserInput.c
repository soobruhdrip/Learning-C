#include <stdio.h>
int main()
{
    int age;
    float price;
    char grade;
    char name[20];
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your price : ");
    scanf("%f",&price);
    printf("Enter Your Grade : ");
    scanf(" %c",&grade);
    printf("Enter Your Name : ");
    scanf("%s",&name);

    printf("Your Age : %d\n",age);
    printf("Your Price : %f\n",price);
    printf("Your Grade : %c\n",grade);
    printf("Your Name  : %s \n",name);

    return 0;
}
