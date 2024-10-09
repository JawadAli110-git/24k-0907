#include<stdio.h>
int main(void)
{
    float money, change, price_onion, price_apricot, price_grape, price_tomato;
    int qty_oni, qty_apri, qty_grape, qty_tomato;
    printf("Enter number of Rupees :");
    scanf("%f",&money);
    if(money >= 10)
    {
        printf("Enter the quantity of onions and its price: ");
        scanf("%d %f",&qty_oni,&price_onion);
        change = money - (qty_oni * price_onion);
        printf("change:%.3f\n",change);
        printf("Enter the quantity of apricot and its price: ");
        scanf("%d %f",&qty_apri,&price_apricot);
        change = change - (qty_apri * price_apricot);
        printf("change:%.3f\n",change);
        printf("Enter the quantity of grapes and its price: ");
        scanf("%d %f",&qty_grape,&price_grape);
        change = change - (qty_grape * price_grape);
        printf("change:%.3f\n",change);
        printf("Enter the quantity of tomatoes and its price: ");
        scanf("%d %f",&qty_tomato,&price_tomato);
        change = change - (qty_tomato * price_tomato);
        printf("change:%.3f",change);
    }
    else {
        printf("You don't have enough money");
    }
    return 0;
}