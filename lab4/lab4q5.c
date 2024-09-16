#include<stdio.h>
int main(void)
{
    char customer_name[30];
    int customer_ID;
    float units_consumed, tot_charges, sur_amount, net_amount;
    printf("Customer ID:");
    scanf("%d",&customer_ID);
    printf("Customer Name:");
    scanf(" %s",&customer_name);
    printf("Units Consumed:");
    scanf("%f",&units_consumed);
    if(units_consumed >= 1&&units_consumed <= 199)
    {
        tot_charges = units_consumed * 16.20;
        printf("Amount charges @16.20 per unit:%f",tot_charges);
        if(tot_charges >= 18000)
        {
            sur_amount = tot_charges * 0.15;
            printf("\nSurcharge amount:%f",sur_amount);
            net_amount = tot_charges + sur_amount;
            printf("\nNet amount paid by a customer:%f",net_amount);
        }
        else {
            printf("\nSurcharge amount: 0");
            printf("\nNet amount paid by a customer:%f",tot_charges);
        }
    }
    else if(units_consumed >= 200&&units_consumed < 300)
    {
        tot_charges = units_consumed * 20.10;
        printf("Amount charges @20.10 per unit:%f",tot_charges);
        if(tot_charges >= 18000)
        {
            sur_amount = tot_charges * 0.15;
            printf("\nSurcharge amount:%f",sur_amount);
            net_amount = tot_charges + sur_amount;
            printf("\nNet amount paid by a customer:%f",net_amount);
        }
        else {
            printf("\nSurcharge amount: 0");
            printf("\nNet amount paid by a customer:%f",tot_charges);
        }
    }
    else if(units_consumed >= 300&&units_consumed < 500)
    {
        tot_charges = units_consumed * 27.10;
        printf("Amount charges @27.10 per unit:%f",tot_charges);
        if(tot_charges >= 18000)
        {
            sur_amount = tot_charges * 0.15;
            printf("\nSurcharge amount:%f",sur_amount);
            net_amount = tot_charges + sur_amount;
            printf("\nNet amount paid by a customer:%f",net_amount);
        }
        else {
            printf("\nSurcharge amount: 0");
            printf("\nNet amount paid by a customer:%f",tot_charges);
        }
    }
    else if(units_consumed >= 500)
    {
        tot_charges = units_consumed * 35.90;
        printf("Amount charges @35.90 per unit:%f",tot_charges);
        if(tot_charges >= 18000)
        {
            sur_amount = tot_charges * 0.15;
            printf("\nSurcharge amount:%f",sur_amount);
            net_amount = tot_charges + sur_amount;
            printf("\nNet amount paid by a customer:%f",net_amount);
        }
        else {
            printf("\nSurcharge amount: 0");
            printf("\nNet amount paid by a customer:%f",tot_charges);
        }
    }
    else {
        printf("\nInvalid input");
    }
    return 0;
}