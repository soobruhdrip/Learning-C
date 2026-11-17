#include <stdio.h>
int countvowels(char str[])
{
    if (str[0]=='\0')
        return 0;
    char ch=str[0];
    int vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    return vowel + countvowels(str+1);
}

int main(){
char str[100];
printf("Enter a string : ");
scanf("%[^\n]",str);

printf("Total vowels : %d", countvowels(str));
return 0;
}
