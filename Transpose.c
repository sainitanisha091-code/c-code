#include <stdio.h>
void transposeMatrix(int r, int c, int matrix[][c], int transposed[][r])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int r, int c, int matrix[][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    int transposed[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("original matrix \n");
    printMatrix(r, c, matrix);
    transposeMatrix(r, c, matrix, transposed);
    printf("transposed matrix \n");
    printMatrix(c, r, transposed);
}