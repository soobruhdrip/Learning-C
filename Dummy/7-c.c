#include <stdio.h>
void rev(char str[], int i){
    if (str[i]=='\0'){
        return;
    }
    rev(str,i+1);
    printf("%c",str[i]);
}

void pep(char str[]){
    rev(str,0);
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]", str);


    printf("Reversed string : ");
    pep(str);
        return 0;
}
