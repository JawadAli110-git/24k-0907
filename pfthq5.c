#include<stdio.h>
int main(void)
{
    char crop, status;
    float moist_level;
    printf("Enter the soil moisture level: ");
    scanf("%f",&moist_level);
    printf("Enter the crop type: ");
    scanf(" %c",&crop);
    printf("Enter the rainfall status: ");
    scanf(" %c",&status);
    if((crop == 'W'||crop == 'w')&&(status == 'N'||status == 'n')&&(moist_level <= 30))
    {
        printf("Wheat should be irrigated");
    }
    else if((crop == 'C'||crop == 'c')&&((status == 'Y'||status == 'y')||(status == 'N'||status == 'n'))&&(moist_level <= 40))
    {
        printf("Corn should be irrigated");
    }
    else if((crop == 'R'||crop == 'r')&&(status == 'Y'||status == 'y')&&(moist_level <= 25))
    {
        printf("Rice should be irrigated");
    }
    else {
        printf("No irrigation is applied");
    }
    return 0;
}