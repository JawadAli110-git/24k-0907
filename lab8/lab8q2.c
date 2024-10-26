#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n % 2 != 0)
    {
        for(int i=n;i>=1;i-=2)
        {
            for(int j=i;j>=1;j-=2)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    
    return 0;
}