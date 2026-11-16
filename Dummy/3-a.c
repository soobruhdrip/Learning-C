// OBJECTIVE : Create a menu-driven C program using switch with these options:
//1. Deposit
//2. Withdraw
//3. Check Balance
//4. Exit

#include <stdio.h>
int main()
{
    int choice;
    float balance=1000, amount;

    printf("Bank Menu -----\n");
    printf("1. Deposit \n");
    printf("2. Withdraw \n");
    printf("3. Check Balance \n");
    printf("4. Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
        {
            case 1:
                {
                    printf("Enter the amount you want to deposit :");
                    scanf("%f",&amount);
                    balance=balance+amount;
                    printf("Current balance : $%.2f",balance);
                }
            break;

            case 2:
                {
                    printf("Enter the amount you want to withdraw : ");
                    scanf("%f",&amount);
                    balance=balance-amount;
                    printf("Current balance : $%.2f",balance);
                }
            break;

            case 3:
                {
                    printf("Your current balance is : $%.2f",balance);
                }
            break;

            case 4:
                {
                    printf("Successfully exited the program...");
                }
            break;

            default:
                {
                    printf("Invalid Option");
                }
        }
    return 0;
}
