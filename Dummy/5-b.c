#include <stdio.h>
float ctof(float c){
    return (c*9/5)+32;}

float ftoc(float f){
    return (f-32)*5/9;}

float ctok(float c){
    return 273.15+c;}

int main()
{
    int choice;
    float temp,converted;
    printf("Temperature Conversion Menu\n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Fahrenheit to Celcius\n");
    printf("3. Celcius to Kelvin\n");
    printf("Enter a choice : \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            {
            printf("Enter temp in Celcius : ");
            scanf("%f",&temp);
            converted=ctof(temp);
            printf("%.2f C = %.2f F\n", temp, converted);
            break;
            }
        case 2:
            {
            printf("Enter temp in Fahrenheit : ");
            scanf("%f",&temp);
            converted=ftoc(temp);
            printf("%.2f F = %.2f C\n", temp, converted);
            break;
            }
        case 3:
            {
            printf("Enter temp in Celcius : ");
            scanf("%f",&temp);
            converted=ctok(temp);
            printf("%.2f C = %.2f K\n", temp, converted);
            break;
            }
        default:
            {
                printf("Invalid option");
            }
    }

    
}
