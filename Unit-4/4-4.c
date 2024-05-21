// Find the transpose of 3 X 3 matrix.
#include<stdio.h>
#define ROW 3
#define COLUMN 3
void main()
{
    int matrix[ROW][COLUMN], transpose[ROW][COLUMN], i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the element of %d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    printf("The matrix you entered is \n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of given matrix is \n");
    for (j = 0; j < COLUMN; j++)
    {
        for (i = 0; i < ROW; i++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

