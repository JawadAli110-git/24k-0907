#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 3 == 0&&num % 5 == 0)
    {
        printf("The number is divisible by both 3 and 5");
    }
    else {
        printf("Enter valid number");
    }
    return 0;
}