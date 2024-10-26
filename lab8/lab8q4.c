#include <stdio.h>

int main()
{
    int nr, nc;
    printf("Enter the number of rows: ");
    scanf("%d", &nr);
    printf("Enter the number of columns: ");
    scanf("%d", &nc);
    int mat1[nr][nc];
    int mat2[nr][nc];
    int mat3[nr][nc];
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Fisrt Matrix:\n");
    printf("\n");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second Matrix:\n");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            mat3[i][j] = 0;
        }
    }
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            for (int k = 0; k < nr; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\n");
    printf("Multiplication matrix:\n");
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}