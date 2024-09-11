#include<stdio.h>
int main(void)
{
    float x1, x2, y1, y2, slope;
    printf("Enter the first point coordinates (x1, y1): ");
    scanf("%f %f",&x1, &y1);
    printf("Enter the second point coordinates (x2, y2): ");
    scanf("%f %f",&x2, &y2);
    slope = (y2-y1)/(x2-x1);
    printf("the slope is :%.3f", slope);
    return 0;
}