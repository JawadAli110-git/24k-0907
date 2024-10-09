#include<stdio.h>
int main(void)
{
    int high_score = 0, score, player_num, position;
    for(player_num = 0; player_num<10; player_num++){
        printf("Enter the score of the player");
        scanf("%d",&score);
        if(score >high_score)
        {
            high_score = score;
            position = player_num+1;
        }
    }
    printf("Highest score is:%d\n",high_score);
    printf("player number with highest score:%d",position);
    return 0;
}