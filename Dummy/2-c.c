//OBJECTIVE : Write a C program to check whether a given year is a leap year using Boolean logic.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year : ");
    scanf("%d",&a);

    if (a%400==0 || (a%4==0 && a%100!=0))
    {
        printf("It is a Leap Year");
    }
    else
    {
        printf("It is not a leap year ");
    }
    return 0;
}
