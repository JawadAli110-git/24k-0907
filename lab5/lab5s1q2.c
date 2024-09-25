
#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num > 0)
    {
        if(num % 2 == 0)
        {
            printf("It is a positive and an even number");
        }
        else {
            printf("It is a positive and an odd number");
        }
    }
    else if(num == 0)
    {
        printf("The number is zero");
    }
    else {
        printf("It is negative number");
    }
    return 0;
}
