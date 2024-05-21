// Display the sum of the individual rows and columns of a matrix.
#include<stdio.h>
#define N 100
void main()
{
    int matrix[N][N], sum_rows, sum_cols;
    int i, j, rows, cols;
    printf("Enter rows and columns of matrix:");
    scanf("%d%d", &rows, &cols);
    printf("Elements for matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter the element of %d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }            
    }
    printf("The entered matrix is \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
        sum_rows = 0;
        for (j = 0; j < cols; j++)
        {
            sum_rows += matrix[i][j];                              
        }         
        printf("The sum of %d row of entered matrix is %d.\n", i+1, sum_rows);
    }
    for (j = 0; j < cols; j++)
    {
        sum_cols = 0;
        for (i = 0; i < rows; i++)
        {
            sum_cols += matrix[i][j];                              
        }         
        printf("The sum of %d column of entered matrix is %d.\n", j+1, sum_cols);
    }
}

