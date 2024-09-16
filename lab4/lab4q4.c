#include<stdio.h>
int main(void)
{
    float cost, pay_aft_dis, dis;
    printf("Enter the cost: ");
    scanf("%f",&cost);
    if(cost >= 500&&cost < 2000)
    {
        printf("The cost is:%f\n",cost);
        dis = cost * 0.05;
        printf("The discount is:%f\n",dis);
        pay_aft_dis = cost - dis;
        printf("The payment after discount is:%f\n",pay_aft_dis);
    }
    else if(cost >= 2000&&cost < 4000)
    {
        printf("The cost is:%f\n",cost);
        dis = cost * 0.1;
        printf("The discount is:%f\n",dis);
        pay_aft_dis = cost - dis;
        printf("The payment after discount is:%f\n",pay_aft_dis);
    }
    else if(cost >= 4000&&cost < 6000)
    {
        printf("The cost is:%f\n",cost);
        dis = cost * 0.2;
        printf("The discount is:%f\n",dis);
        pay_aft_dis = cost - dis;
        printf("The payment after discount is:%f\n",pay_aft_dis);
    }
    else if(cost >= 6000)
    {
        printf("The cost is:%f\n",cost);
        dis = cost * 0.35;
        printf("The discount is:%f\n",dis);
        pay_aft_dis = cost - dis;
        printf("The payment after discount is:%f\n",pay_aft_dis);
    }
    else if(cost <= 0)
    {
        printf("Invalid input");
    }
    else {
        printf("There is no discount\nTHANK YOU!");
    }
    return 0;
}