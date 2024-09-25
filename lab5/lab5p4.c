#include<stdio.h>
int main(void)
{
    int age, credit_score;
    float income;
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("Enteer the credit score: ");
    scanf("%d",&credit_score);
    printf("Enter your income: ");
    scanf("%f",&income);
    if((age >= 18 && age <=100) && (income <= 50000) && (credit_score >= 580 && credit_score <=850))
    {
        printf("You are eligible for the loan.");
    }
    else {
        printf("You are not eligible for the loan.");
    }
    return 0;
}