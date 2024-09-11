#include<stdio.h>
int main(void)
{
    float fuel_avg, fuel_costA, fuel_costB, tot_fuel, tot_cost;
    int dis = 1207, A = 118, B = 123;
    printf("Enter the car's fuel average :");
    scanf("%f",&fuel_avg);
    if(fuel_avg > 0)
    {
    tot_fuel = dis / fuel_avg;
    printf("The total fuel used is :%f\n",tot_fuel);
    fuel_costA = tot_fuel * A;
    printf("The fuel cost from A to B is :%f\n",fuel_costA);
    fuel_costB = tot_fuel * B;
    printf("The fuel cost from B to A is :%f\n",fuel_costB);
    tot_cost = fuel_costA + fuel_costB;
    printf("The total Trip cost is :%f",tot_cost);
    }
    else{
    printf("invalid data");
    }

    return 0;
}