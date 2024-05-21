// Display the sum of two matrix.
#include<stdio.h>
#define N 100
void main()
{
    int matrix_first[N][N], matrix_second[N][N], sum[N][N];
    int i, j, rows, cols;
    printf("Enter rows and columns of matrix:");
    scanf("%d%d", &rows, &cols);
    printf("Elements for first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter the element of %d%d: ", i+1, j+1);
            scanf("%d", &matrix_first[i][j]);
        }
        
    }
    printf("Elements for second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter the element of %d%d: ", i+1, j+1);
            scanf("%d", &matrix_second[i][j]);
        }
        
    }
    printf("The first matrix is \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix_first[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix_second[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = matrix_first[i][j] + matrix_second[i][j];
        }
        
    }
    printf("The sum of the entered matrices is \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}