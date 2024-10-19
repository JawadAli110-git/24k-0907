#include<stdio.h>
int main(void)
{
    int n, max, min,c;
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
    int rep[n];
    for(int i=0;i<n;i++)
    {
        rep[i] =0;
    }
    for(int i=0;i<n;i++)
    {
        rep[num[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(rep[i] > 1)
        {
            printf("number %d is repeated %d\n",i,rep[i]);
        }
    }
    return 0;
}