#include<stdio.h>
void checkPrime(int n);
void checkPrime(int n)
{
    int count =0;
    if(n> 1)
    {
        for(int i=1;i<=n;i++)
        {
            if(n % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("The number %d is PRIME",n);
        }
        else {
            printf("The number %d is  COMPOSITE",n);
        }
    }
    else {
        printf("The number is 0 or 1 i.e neither prime nor composite");
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    checkPrime(num);
    return 0;
}