#include<stdio.h>
int main(void)
{
    int student_id, rem, no_tick, batch_no;
    float dis, amount;
    printf("Enter your 6-digit(XXYYYY) Roll number:");
    scanf("%d",&student_id);
    printf("Enter the number of tickets:");
    scanf("%d",&no_tick);
    batch_no = student_id / 10000;
    rem = student_id % 100;
    if((student_id > 100000 && student_id < 999999) && (batch_no >= 21 && batch_no <= 24))
    {
        if(batch_no == 21)
        {
            amount = 1800;
            if(rem == 10)
            {
                dis = amount * 0.1;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(rem == 20)
            {
                dis = amount * 0.2;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(no_tick >= 10)
            {
                amount = (no_tick * amount) - (amount);
                printf("The amount is:%.2f",amount);
            }
            else {
                printf("There is no discount and the amount is:%.2f",amount);
            }
        }
        else if(batch_no == 22)
        {
            amount = 1700;
            if(rem == 10)
            {
                dis = amount * 0.1;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(rem == 20)
            {
                dis = amount * 0.2;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(no_tick >= 10)
            {
                amount = (no_tick * amount) - (amount);
                printf("The amount is:%.2f",amount);
            }
            else {
                printf("There is no discount and the amount is:%.2f",amount);
            }
        }
        else if(batch_no == 23)
        {
            amount = 1600;
            if(rem == 10)
            {
                dis = amount * 0.1;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(rem == 20)
            {
                dis = amount * 0.2;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(no_tick >= 10)
            {
                amount = (no_tick * amount) - (amount);
                printf("The amount is:%.2f",amount);
            }
            else {
                printf("There is no discount and the amount is:%.2f",amount);
            }
        }
        else if(batch_no == 24)
        {
            amount = 1500;
            if(rem == 10)
            {
                dis = amount * 0.1;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(rem == 20)
            {
                dis = amount * 0.2;
                amount = (amount*no_tick) - dis;
                printf("The amount is:%.2f",amount);
            }
            else if(no_tick >= 10)
            {
                amount = (no_tick * amount) - (amount);
                printf("The amount is:%.2f",amount);
            }
            else {
                amount = no_tick * amount;
                printf("There is no discount and the amount is:%.2f",amount);
            }
        }
        else {
            printf("No batch found");
        }
    }
    else {
        printf("Invalid student id OR batch number");
    }
    return 0;
}