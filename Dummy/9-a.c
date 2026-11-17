#include <stdio.h>
void reverse (int a[], int n)
{
    for(int i=n-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
}

int main()
{
    int a[100],n;
    printf("Enter the elements : ");
    scanf("%d",&n);

    if(n<1 || n>100)
    {
        printf("Invalid numbers");
    }
    
    for (int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("reversed : ");
    reverse(a,n);
}
