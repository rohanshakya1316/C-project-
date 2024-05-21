// Show the sum of the diagonal elements of a square matrix.
#include<stdio.h>
#define N 100
void main()
{
    int matrix[N][N], sum = 0;
    int i, j, rows, cols;
    printf("Enter rows and columns of matrix:");
    scanf("%d%d", &rows, &cols);
    if (rows != cols)
        printf("Error! A square matrix has equal rows and columns. Try again!!");
    else
    {
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
            for (j = 0; j < cols; j++)
            {
                if (i == j)
                {
                    sum += matrix[i][j];
                }                              
            }         
        }
        printf("The sum of the diagonals of entered matrix is %d", sum);
    }
}