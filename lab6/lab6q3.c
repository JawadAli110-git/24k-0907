#include<stdio.h>
int main(void)
{
    int i, n, counter = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
    {
        if(n%i == 0)
        {
            counter += 1;
        }
    } 
    if(counter == 2)
    {
        printf("%d is a prime number",n);
    }
    else if(counter > 2)
    {
        printf("%d is composite number",n);
    }
    else {
        printf("%d is neither prime nor composite number",n);
    }
    return 0;
}