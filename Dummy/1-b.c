// Objective: Swap two numbers using:
// 1. A temporary variable.
#include <stdio.h>
int main()
{
  int a=10;
  int b=20;
  int x;

  printf("Before Swapping --- \n");
  printf("First Number : %d\n",a);
  printf("Second Number : %d\n",b);
  printf("\n");

  x=a;
  a=b;
  b=x;

  printf("After Swapping ---\n");
  printf("First Number : %d\n",a);
  printf("Second Number : %d\n",b);

  return 0;
}

// 2. Without a temporary variable.
#include <stdio.h>
int main()
{
  int a=10;
  int b=20;
  printf("Before Swapping --- \n");
  printf("First Number : %d\n",a);
  printf("Second Number : %d\n",b);
  printf("\n");

  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swapping ---\n");
  printf("First Number : %d\n",a);
  printf("Second Number : %d\n",b);
  
  return 0;
}
