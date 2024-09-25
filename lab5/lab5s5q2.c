#include<stdio.h>
int main(void)
{
    int sum = 0, num, remainder;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    printf("The sum of the digit is:%d",sum);
    return 0;
}