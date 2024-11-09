#include<stdio.h>
void Swap (int a,int b);
void Swap (int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("The value of num1 is %d \n The value of num is %d  ",a,b);
    return;
   
}
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    Swap(num1,num2);
    return 0;
}