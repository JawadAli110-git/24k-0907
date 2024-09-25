
#include<stdio.h>
int main(void)
{
    int age;
    printf("Enert age:");
    scanf("%d",&age);
    if(age >= 1&&age <= 10)
    {
        printf("You are child");
    }
    else if(age > 10&&age <=17)
    {
        printf("You are teenager");
    }
    else if(age > 17&&age <= 30)
    {
        printf("You are an adult");
    }
    else if(age > 30&&age <= 100)
    {
        printf("You are a senior");
    }
    else {
        printf("Invalid age");
    }
    return 0;
}
