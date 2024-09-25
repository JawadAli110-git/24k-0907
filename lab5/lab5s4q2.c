#include<stdio.h>

int main() {
    int num, count1 = 0, count2;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count1 += num & 1;  
        num >>= 1;         
    }
    count2 = 32 - count1;
    
    printf("Number of 1s in the binary representation: %d\n", count1);
    printf("Number of 0s in the binary representation: %d",count2);
    
    return 0;
}