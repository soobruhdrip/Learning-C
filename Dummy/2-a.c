// Objective: Use Boolean logic and conditional statements to classify values.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);

// Check If Odd or Even
  if (a%2==0)
  {
    printf("Your number is even\n");
  }

  else
  {
    printf("Your number is odd\n");
  }

// Check If Number +ve or -ve or zero

  if (a>0)
{
  printf("Your Number is Positive\n");
}
  else if(a<0)
{
  printf("Your number is Negative\n");
}
  else 
{
  printf("Your number is zero\n");
}
return 0;
}
