#include<stdio.h>

int main(void)
{
    float a,b,sum,sub,mult,div;
    
    printf("Enter the value of a: \n");
    scanf("%f",&a);
    printf("Enter the value of b: \n");
    scanf("%f",&b);
    sum=a+b;
    printf("sum is %.2f\n",sum);
    sub=a-b;
    printf("sub is %.2f\n",sub);
    mult=a*b;
    printf("mult is %.2f\n",mult);
    div=a/b;
    printf("div is %.2f\n",div);
    return 0;
}