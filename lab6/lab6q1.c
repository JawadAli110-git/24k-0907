#include<stdio.h>
int main(void)
{
    int sum = 0, num;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        sum+=num;
    } while (num != 0);
    printf("The sum is: %d",sum);

    return 0;
}