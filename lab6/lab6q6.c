#include<stdio.h>
int main(void)
{
    int i, f = 1, s = 2, t, n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    printf("%d,",f);
    printf("%d,",s);
    for(i = 1; i<=n; i++)
    {
        t = f * s;
        printf("%d,",t);
        f = s;
        s = t;
    }
    return 0;
}