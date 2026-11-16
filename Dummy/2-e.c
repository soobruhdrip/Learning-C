// Write a C program using Boolean logic to check loan eligibility and scholarship eligibility.

#include <stdio.h>
int main()
{
    int age;
    int salary;
    printf("Enter your salary :");
    scanf("%d",&salary);
    printf("Enter your age : ");
    scanf("%d",&age);

    if ((age>=21 && age<=60) && salary>=45000){
        printf("You are eligible for the loan");
    }
    else{
        printf("You are not eligible for the loan");
    }
    return 0;
}
