// Find the product of two matrices. If multiplication is not possible 
//display appropriate message.
#include<stdio.h>
#define N 100
void main()
{
    int matrix_first[N][N], matrix_second[N][N], result[N][N];
    int ROW, COLUMN, row, column, sum, i, j, k;
    printf("Enter the rows and columns for the first matrix: ");
    scanf("%d %d", &ROW, &COLUMN);
    printf("Enter the rows and columns for the second matrix: ");
    scanf("%d %d", &row, &column);
    if (COLUMN != row)
    {
        printf("For matrix multiplication, column of first matrix must equals with row of second one.\n");
        printf("Please try again!!");
    }
    else
    {
        for (i = 0; i < ROW; i++)
        {
            for (j = 0; j < COLUMN; j++)
            {
                printf("Enter the element of %d%d: ", i+1, j+1);
                scanf("%d", &matrix_first[i][j]);
            }
        }
        printf("First Matrix:\n");
        for (i = 0; i < ROW; i++)
        {
            for (j = 0; j < COLUMN; j++)
            {
                printf("%d\t", matrix_first[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf("Enter the element of %d%d: ", i+1, j+1);
                scanf("%d", &matrix_second[i][j]);
            }
        }
        printf("Second Matrix:\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf("%d\t", matrix_second[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < ROW ; i++)
        {
            for (j = 0; j < column; j++)
            {
                sum = 0;
                for (k = 0; k < row; k++) // row of 2 martix or cols of 1 matrix for condition
                {
                    sum += matrix_first[i][k] * matrix_second[k][j];
                }
                result[i][j] = sum;
            }
            
        }
        printf("Multiplication of entered matrices is \n");
        for (i = 0; i < ROW; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }
}   

