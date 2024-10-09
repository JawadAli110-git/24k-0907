#include<stdio.h>
int main(void)
{
    int i , n, f=1, s=2, t;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d,",f);
    printf("%d,",s);
    for(i = 1; i<=n; i++)
    {
        t = f + s;
        printf("%d,",t);
        f = s;
        s = t;
    }
    return 0;
}