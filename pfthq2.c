#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num >= 1)
    {
        if(num % 2==0)
        {
           printf("The number is an even number"); 
        }
        else {
            printf("The number is an odd number");
        }
    }
    else {
        printf("invalid info");
    }

    return 0;
}