#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter the value of a : \n");
   scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("The value of a now :%d\n",a);
    printf("The value of b now :%d\n",b);

    return 0;
}