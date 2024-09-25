#include<stdio.h>
int main(void)
{
    int attend, assign_scores, results, paper_marks;
    printf("Enter the attendance: ");
    scanf("%d",&attend);
    printf("Enter the assignment scores: ");
    scanf("%d",&assign_scores);
    printf("Enter paper marks: ");
    scanf("%d",&paper_marks);
    results = assign_scores + paper_marks;
    if(results >= 50 && results <= 100)
    {
        if(results >=50 && results <=60)
        printf("YOU ACHIEVE D GRADE");
        if(results > 60 && results <= 75)
        {
            printf("YOU ACHIEVED C GRADE");
        }
        else if(results > 75 && results <= 85)
        {
            printf("YOU ACHIEVED B GRADE");
        }
        else if(results > 85 && results <= 90)
        {
            printf("YOU ACHIEVED A GRADE");
        }
        else if(results > 90 && results <= 100)
        {
            printf("YOU ACHIEVED A* GRADE");
        }
        else {
            printf("RETRY");
        }
    }
    else {
        printf("Invalid info");
    }
    if(attend >= 75)
    {
        printf("\nYour attendance is complete");
    }
    else {
        printf("\nYour attendance is incomplete");
    }
    return 0;
}