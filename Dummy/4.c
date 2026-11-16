#include <stdio.h>
int even(int n)
{
    int sum=0;
    for (int i=1; i<=n;i++)
        {
            sum=sum+(2*i);
        }
    return sum;
}
int main(){
    int n, result;
    printf("Enter n : ");
    scanf("%d",&n);
    result=even(n);
    printf("Sum of %d even numbers are : %d", n, result);
    return 0; 
}
   
