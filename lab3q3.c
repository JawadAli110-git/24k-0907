#include<stdio.h>
int main(void)
{
    float tax_rate, salary, net_sal, tax;
    printf("Enter the tax rate :");
    scanf("%f",&tax_rate);
    printf("Enter the salary :");
    scanf("%f",&salary);
    tax = salary * tax_rate;
    printf("The tax is :%.3f\n",tax);
    net_sal = salary - tax;
    printf("The net salary is :%.3f\n",net_sal);

    return 0;
}