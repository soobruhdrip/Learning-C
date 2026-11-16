#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int n1, n2, result;
    printf("Enter Your 2 Numbers : ");
    scanf("%d %d", &n1, &n2);
    result=gcd(n1,n2);
    printf("GCD is %d",result);
    return 0;
}
