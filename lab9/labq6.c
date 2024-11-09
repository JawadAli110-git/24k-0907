#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#define max 90
#define min 0
int MAX(int array[],int num);
int MIN(int array[],int num);
int main()
{
    srand(time(0));
    int n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int arrays[n];
    for(int i=0;i<n;i++)
    {
        arrays[i] = rand()%(max - min +1)+min;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arrays[i]);
    }
    printf("\n");
    printf("The maximum number is: %d\n",MAX(arrays,n));
    printf("The minimum number is: %d\n",MIN(arrays,n));
    
    return 0;
}
int MAX(int array[],int num)
{
    int maximum = INT_MIN;
    for(int i=0;i<num;i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    return maximum;
}
int MIN(int array[],int num)
{
    int minimum = INT_MAX;
    for(int i=0;i<num;i++)
    {
        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    return minimum;
}