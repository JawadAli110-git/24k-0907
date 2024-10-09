#include<stdio.h>
int main(void)
{
    int age_m, age_f;
    int edu_M, edu_F;
    char province;
    printf("Enter the age of male :");
    scanf("%d",&age_m);
    printf("Enter the age of female :");
    scanf("%d",&age_f);
    printf("Enter the education of male and female :");
    scanf("%d%d",&edu_M,&edu_F);
    printf("Enter your province :");
    scanf("  %c",&province);
    if(province == 'S'||province == 's')
    {
        if((age_m >= 18&&age_f >=18)&&(edu_M >= 12&&edu_F >=12))
        {
            printf("Both are eligible for marriage");
        }
        else {
            printf("Both are not eligible for marriage");
        }
    }
    else if(province == 'P'||province == 'p')
    {
        if((age_m >= 18&&age_f >=16)&&(edu_M >= 12&&edu_F >= 12))
        {
            printf("Both are eligible for marriage");
        }
        else {
            printf("Both are not eligible for marriage");
        }
    }
    else {
        printf("Invalid province");
    }
    return 0;
}