#include <stdio.h>

int min(int mat[], int r){
    int minimum = mat[0];
    int position = 0;
    for(int i = 0;i<r;i++){
        if(mat[i] < minimum){
            minimum = mat[i];
            position = i;
        }
    }
    return position;
}

int main() {
    int nr,nc;
    printf("Enter the number of rows: ");
    scanf("%d",&nr);
    printf("Enter the number of columns: ");
    scanf("%d",&nc);
    int mat[nr][nc];
    for(int i=0; i<nr;i++)
    {
        for(int j=0;j<nc;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<nr;i++)
    {
        for(int j=0;j<nc;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    for(int i =0;i<nr;i++){
        int min_position = min(mat[i],nr);
        int minimum = mat[i][min_position];
        int maximum = minimum;
        for(int j = 0;j<nr;j++){
            if(mat[j][min_position] > maximum){
                maximum = mat[j][min_position];
            }
        }
        if(maximum == minimum){
            printf("The saddle in this Matrix is : %d",maximum );
        }
    }
    
    
    return 0;
}