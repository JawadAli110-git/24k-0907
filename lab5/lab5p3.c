#include<stdio.h>
int main(void)
{
    char character, encrypt_char, decrypt_char;
    int key;
    printf("Enter the character to encrypt: ");
    scanf(" %c",&character);
    printf("Enter the key: ");
    scanf("%d",&key);
    encrypt_char = character ^ key;
    printf("The encrypted character is: %c\n",encrypt_char);
    decrypt_char = encrypt_char ^ key;
    printf("The decrypted character is: %c",decrypt_char);
    
    return 0;
}