#include<stdio.h>
#include<string.h>
#define Row 4
#define Col 20
void checkPalindrome(char word[Col]);
int main()
{
    char words[Row][Col];
    for(int i=0;i<4;i++)
    {
        printf("Enter the word: ");
        scanf("%s",words[i]);
    }
    for(int i=0;i<4;i++)
    {
        printf("%d. %s\n",i+1,words[i]);
    }
    for(int i=0;i<4;i++)
    {
        checkPalindrome(words[i]);
    }
    return 0;
}
void checkPalindrome(char word[Col])
{
    int i,j;
    char rev[Col];
    int len = strlen(word);
    for(i=0,j=len-1;i<len && j>=0;i++,j--)
    {
        rev[i] = word[j];
    }
    rev[len] = '\0';
    printf("reverse of word: %s\n",rev);
    if(!strcmp(word,rev))
    {
        printf("The word %s is a Palindrome.\n",word);
    }
    else {
        printf("The word %s is not a Plaindrome.\n",word);
    }
    
}