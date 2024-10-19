#include<stdio.h>
int main(void)
{
    int n, sum = 0;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum += num[i];
    }
    printf("The sum is: %d",sum);

    return 0;
}