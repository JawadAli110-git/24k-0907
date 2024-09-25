#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    (num1 > num2)?printf("number one is greater"):printf("number two is greater");

    return 0;
}