#include<stdio.h>
int main(void)
{
    char character;
    printf("Enter the character: ");
    scanf(" %c",&character);
    if(character >= 65&&character <= 90)
    {
        printf("It is a capital alphabet");
    }
    else if(character >= 97&&character <= 122)
    {
        printf("It is a small alphabet");
    }
    else if((character >= 33&&character <= 47)||(character >= 58&&character <= 64)||(character >= 91&&character <= 96)||(character >= 123&&character <= 126))
    {
        printf("It is a special character");
    }
    else {
        printf("It is a digit");
    }
    return 0;
}