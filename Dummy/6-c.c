#include <stdio.h>
int reverse(int n, int rev)
{
    if (n==0)
        return rev;
    return reverse(n/10, rev*10+n%10);
}

int main()
{
    int n, result;
    printf("Enter your number : ");
    scanf("%d",&n);
    result=reverse(n,0);

    if (n==result)
    {
        printf("it is a palindrome ");
    }
    else
    {
        printf("Itis nota palindrome");
    }
    return 0;
}
