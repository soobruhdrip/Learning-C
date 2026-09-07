// basic int variable
//
#include <stdio.h>
int main()
{
    int age = 19;  //Decimals wont work since its a int and not a float/double
    int year = 2026;
    int quantity = 4;
  
    printf("I am %d Years Old \n",age);
    printf("It is Currently %d \n",year);
    printf("You have bought %d items", quantity);

  return 0;
}
//
// Float Variable
//
#include <stdio.h>
int main()
{
    float gpa = 2.5;    //float shows upto 6 decimal points
    float price  = 19.991;
    float temperature = -10.01;

    printf("Your GPA is %f\n",gpa);
    printf("The Price of this product is $%f\n",price);
    printf("The Temperature is %f\n", temperature);
    return 0;
}
//
// Double Variable (Longer/More Precise float
//
#include <stdio.h>
int main()
{
    double pi=3.148721371829123; 
    double e = 1.231983123324239;

    printf("The Value of pi is %.13lf \n",pi); //LF = long float, specify the number of decimals u want before the lf
    printf("The Value of e is %.8lf \n",e);
    return 0;
}
//
//Char Variable 
//
#include <stdio.h>
int main()
{
    char a = 'A';
    printf("Your Grade is %c \n",a);
    char b = '!';
    printf("Hello my name is Subh %c \n",b);
    char c = '$';
    printf("American Dollar looks like this : %c",c);
    return 0;
}
//
// Char (String) Variables
//
#include <stdio.h>
int main()
{
    char ask[]="My Name is Subh";
    char food[]="Burger";

    printf("What is your name? %s \n",ask);
    printf("My Favourite Food is %s \n", food);
    return 0;
}
//
// Boolean Variable
//
#include <stdio.h>
#include <stdbool.h> 

/* 1 or True = True & 0 or False = False */

int main()
{
    bool online = true;
    bool student = 0;

    if(online){
        printf("You are online \n");
    }
    else{
        printf("You are offline \n");
    }

    if(student){
        printf("You are a student\n");
    }
    else{
        printf("You are NOT a student\n");
    }
  return 0;
}

    
