#include<stdio.h>
int main(void)
{
    float dis_kmps, dis_mph;
    printf("Enter the distance in km/sec :");
    scanf("%f",&dis_kmps);
    dis_mph = dis_kmps * 0.621371 * 3600;
    printf("Distance in mph : %.2f",dis_mph);
    
    return 0;
}