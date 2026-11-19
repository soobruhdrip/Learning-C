#include <stdio.h>
int main()
{
    int a[10],n;
    int i,key=0,pos=0;

    printf("Enter no. of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }
    do{
    printf("Enter the value you want : ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            pos=i;
            break;
        }
    }
    if(pos==0){
        printf("not found\n");
    }
}while(pos==0);
printf("You Found it in %d",pos);
}
