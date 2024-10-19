#include <stdio.h>

int main()
{
    int pin = 907, pin1, num, acc_no, pin2, pin3;
    float bal = 234555.20, amount;
    printf("Enter Your PIN CODE: ");
    scanf("%d", &pin1);
    if (pin == pin1)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("1. Check Your Balance\n");
            printf("2. Transfer to another BANK.\n");
            printf("3. Change PIN.\n");
            printf("Enter any other number to exit.\n");
            printf("Enter your choice: ");
            scanf("%d", &num);
            if (num == 1)
            {
                printf("Your Current Balance is: %.2f\n", bal);
            }
            else if (num == 2)
            {
                for (int j = 1; j <= 3; j++)
                {
                    printf("Enter BANK Account number: ");
                    scanf("%d", &acc_no);
                    printf("Enter the amount to transfer: ");
                    scanf("%f", &amount);
                    if (amount < bal)
                    {
                        printf("Amount %.2f transfered to Bank Account number: %d\n", amount, acc_no);
                        bal = bal - amount;
                        printf("Your current Balance is; %.2f\n", bal);
                        break;
                    }
                    else
                    {
                        printf("Insufficient Amount TRY AGAIN!\n");
                    }
                }
            }
            else if (num == 3)
            {
                printf("Re-enter your current PIN: ");
                scanf("%d", &pin2);
                if (pin2 == pin)
                {
                    printf("Enter NEW PIN: ");
                    scanf("%d", &pin3);
                    pin = pin3;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("Invalid PIN");
    }

    return 0;
}