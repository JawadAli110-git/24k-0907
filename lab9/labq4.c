#include<stdio.h>
int Sum(int a,int b);
int Mult(int a,int b);
float Div(int a,int b);
int Subt(int a,int b);
int main()
{
    int num1,num2;
    char opt;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    printf("Enter the operator to perform: ");
    scanf(" %c",&opt);
    if(opt == '+')
    {
        printf("The sum is: %d",Sum(num1,num2));
    }
    else if(opt == '-')
    {
        printf("The diffrence is: %d",Subt(num1,num2));
    }
    else if(opt == '*')
    {
        printf("The product is: %d",Mult(num1,num2));
    }
    else if(opt == '/')
    {
        if(num2 != 0)
        {
            printf("The division is: %.2f",Div(num1,num2));
        }
        else {
            printf("Math Error!");
        }
    }
    else {
        printf("Enter the Valid operator.");
    }
    
    return 0;
}
int Sum(int a,int b)
{
    return a+b;
}
int Mult(int a,int b)
{
    return a*b;
}
float Div(int a,int b)
{
    return (float)a/b;
}
int Subt(int a, int b)
{
    return a-b;
}