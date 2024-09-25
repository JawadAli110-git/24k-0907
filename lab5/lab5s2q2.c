#include<stdio.h>
int main(void)
{
    int age;
    char citizen_ship[4];
    printf("Enter your Age:");
    scanf("%d",&age);
    printf("Enter your citizen status:");
    scanf(" %s",&citizen_ship);
    if(citizen_ship[0] == 'y' && citizen_ship[1] == 'e' && citizen_ship[2] == 's' && age >= 18)
    {
        printf("You are eligible to vote");
    }
    else {
        printf("You are not eligible to vote");
    }
    return 0;
}