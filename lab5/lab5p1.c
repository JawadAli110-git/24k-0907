#include<stdio.h>
int main(void)
{
    int num1, num2, num3;
    printf("Enter the Number one: ");
    scanf("%d",&num1);
    printf("Enter the Number two: ");
    scanf("%d",&num2);
    printf("Enter the Number three: ");
    scanf("%d",&num3);
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("Number one is the greatest %d",num1);
        }
        else if(num2 > num3)
        {
            printf("Number two is the greatest %d",num2);
        }
    }
    else {
        printf("Number three is the greatest %d",num3);
    }
    return 0;
}