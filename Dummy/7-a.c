#include <stdio.h>
int findmax(int arr[],int n)
{
    if (n==1)
    {return arr[0];}
    int max=findmax(arr+1,n-1);
    if (arr[0]>max)
    {
        return arr[0];
    }
    else
    {
        return max;
    }
}

int main()
{
    int arr[100], n,i;
    printf("Enter array size : ");
    scanf("%d",&n);

    if (n<1 || n>100){
        printf("Invalid array size");
    return 0;
    }
    printf("Enter array element");

    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Maximum element : %d", findmax(arr,n));
    return 0;
}
