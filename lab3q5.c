#include<stdio.h>
int main(void)
{
    float P, R, T, simp_interest;
    printf("Enter the principle :");
    scanf("%f",&P);    //P = principle
    printf("Enter the rate :");
    scanf("%f",&R);    //R = rate 
    printf("Enter the time :");
    scanf("%f",&T);    //T = time
    if((P >= 10&&P <= 1000000)&&(R >=5&&R <=10)&&(T >=1&&T <=10))
     {
        simp_interest = (P*R*T)/100;
        printf("Simple interest is : %.2f",simp_interest);
     }
    else{
        printf("Invalid input");
    } 
    return 0;
}