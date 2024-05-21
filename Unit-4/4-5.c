// Check whether 3 X 3 matris is identity matrix or not.
#include<stdio.h>
#define ROW 3
#define COLUMN 3
void main()
{
    int matrix[ROW][COLUMN], i, j, flag = 0;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            printf("Enter the element of %d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }  
    }
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COLUMN; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                flag = 1;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("The entered matrix is an Identity Matrix.\n");
        printf("The matrix you entered is \n");
        for (i = 0; i < ROW; i++)
        {
            for (j = 0; j < COLUMN; j++)
            {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("The entered matrix is not an Identity Matrix.");    
}

