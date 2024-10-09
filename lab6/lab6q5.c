#include<stdio.h>
int main(void)
{
    int i , first_value = 65536, value, n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    printf("%d,",first_value);
    for(i = 2; i <= n; i++)
    {
        value = first_value / i;
        printf("%d,",value);
        first_value = value;

    }

    return 0;
}