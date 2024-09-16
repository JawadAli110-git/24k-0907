#include<stdio.h>
int main(void)
{
    int num1;
    printf("Enter the number :");
    scanf("%d",&num1);
    if(num1%3==0)
    {
        printf("The number is multiple of 3");
    }
    else{
        printf("The number is not a multiple of 3");
    }
    return 0;
}