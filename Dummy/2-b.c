// Objective: Write a C program to check whether an entered character is a vowel or consonant.

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("It is a Vowel");
    }
else
    {
        printf("It is not a Vowel");
    }
    return 0;
}
