#include <stdio.h>

int main() {
    int i, num;
    float bal = 2600.290, amount;
    for(i = 0; i<=100; i++)
    {
        printf("MENU:\n");
        printf("1. Check Loan Amount.\n");
        printf("2. Amount Payment.\n");
        printf("3. Remaining Laon Amount.\n");
        printf("4. Exit.\n");
        printf("Enter Your Choice: ");
        scanf("%d",&num);
        if(num == 1)
        {
            printf("The Loan you need to PAY: %f\n",bal);
        }
        else if(num == 2)
        {
            for(int j = 1; j<= 5; j++)
            {
                printf("Enter the Amount You want to PAY: ");
                scanf("%f",&amount);
                if(amount < bal)
                    {
                        bal = bal - amount;
                        printf("Added successful. Your Remaining Loan Amount is: %.2f\n",bal);
                        break;
                    }
                else {
                    printf("Insufficient Amount TRY AGAIN!\n");
                }
            }
        }
        else if(num == 3)
        {
            printf("Remaining Loan Amount is: %f\n",bal);
        }
        else if(num == 4)
        {
            break;
        }
        else {
            printf("invalid value!\n");
        }
    }

    return 0;
}
