#include<stdio.h>
#include<string.h>
#define size 20
void reversedString(char word[size]);
int main()
{
    char words[size];
    printf("Enter a word: ");
    scanf("%s",words);
    reversedString(words);
    
    return 0;
}
void reversedString(char word[size])
{
    int len = strlen(word);
    char rev[size];
    int i,j;
    for(i=0,j=len-1;i<len && j>=0;i++,j--)
    {
        rev[i] = word[j];
    }
    rev[len] = '\0';
    printf("the reversed string is: %s",rev);
}