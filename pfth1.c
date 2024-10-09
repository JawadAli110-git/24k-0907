#include<stdio.h>
int main(void)
{
    int tick_price = 250, no_tick;
    float age, dis, time;
    printf("Enter your age:");
    scanf("%f",&age);
    printf("Enter Time:");
    scanf("%f",&time);
    printf("Enter number of tickets: ");
    scanf("%d",&no_tick);

    if(age<=14&&time<=6)
    {
        dis = tick_price * 20 / 100;
        printf("dicount on student is :%f",dis);
        if(no_tick>=5)
        {
            dis = tick_price * 25 /100;
            printf("discount on student is :%f",dis);
        }
    }
    else if((age>14&&age<=20)&&time<=6)
    {
        dis = tick_price * 30 /100;
        printf("discount on senior is :%f",dis);
        if(no_tick>=5)
        {
            dis = tick_price * 35 /100;
            printf("discount on senior is :%f",dis);
        }
    }
    else {
        printf("invalid info!");
    } 
    return 0;
}