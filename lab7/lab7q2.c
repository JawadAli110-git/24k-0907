#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",num[j]);
    }
    return 0;
}