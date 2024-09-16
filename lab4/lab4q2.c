#include<stdio.h>
int main(void)
{
    char op;
    float num1, num2;
    printf("Enter the number 1 :");
    scanf(" %f",&num1);
    printf("Enter the number 2 :");
    scanf(" %f",&num2);
    printf("Enter the operator :");
    scanf(" %c",&op);
    switch (op) {
        case '+':
        printf("Sum is :%.2f",num1 + num2);
        break;

        case '-':
        printf("Sub is :%.2f",num1 - num2);
        break;

        case '*':
        printf("Mult is :%.2f",num1 * num2);
        break;

        case '/':
        printf("div is :%.2f",num1 / num2);
        break;

        default:
        printf("Invalid operator");
    }
    return 0;
}
