#include<stdio.h>
int main(void)
{
    int num, counter = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num != 0)
    {
        num /= 10;
        counter+=1;
    }
    if(counter == 0)
    {
        printf("The number is 0");
    }
    else if(counter == 1)
    {
        printf("The number is single digit");
    }
    else {
        printf("The number is %d digit",counter);
    }
    return 0;
}
