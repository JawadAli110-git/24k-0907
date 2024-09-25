#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    (num > 0)?printf("The number is positive"):(num == 0)?printf("The number is zero"):printf("The number is negative");

    return 0;
}