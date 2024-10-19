#include<stdio.h>
int main(void)
{
    int n, max, min;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    max = min = num[0];
    for(int i=1;i<n;i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    printf("The maximum number is: %d\n",max);
    printf("The minimum number is: %d",min);

    return 0;
}