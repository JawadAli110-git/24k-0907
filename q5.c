#include <stdio.h>

int main() {
    int n, ali_scr, fatima_scr, high_scr = 0, low_scr, range, i;
    float avg_scr;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    float score[n];
    for(i = 0; i< n; i++)
    {
        printf("Enter the score %d:",i+1);
        scanf("%f",&score[i]);
    }
    printf("Enter Ali's score: ");
    scanf("%d",&ali_scr);
    printf("Enter Fatima's score: ");
    scanf("%d",&fatima_scr);
    high_scr = low_scr = score[0];
    for(i = 1; i< n; i++)
    {
        if(score[i] > high_scr)
        {
            high_scr = score[i];
        }
        if(score[i] < low_scr)
        {
            low_scr = score[i];
        }
    }
    printf("Highset score is: %d\n",high_scr);
    printf("Lowest score is: %d\n",low_scr);
    range = high_scr - low_scr;
    printf("Range is: %d\n",range);
    printf("Number of students are: %d\n",n);
    float sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += score[i];
    }
    avg_scr = sum / n;
    printf("The average score is: %.1f\n",avg_scr);
    printf("Ali's score: %d, improvement needed %d\n",ali_scr, high_scr-ali_scr);
    printf("Fatima's score: %d, improvement needed %d\n",fatima_scr, high_scr-fatima_scr);

    return 0;
}