/* Draw the box like below
    ************
    *          *
    ************     */
#include<stdio.h>
void main()
{
    int i, j, rows = 3, cols = 12;
    for ( i = 0; i < rows; i++)
    {   
        for (j = 0; j < cols; j++)
        {
            if (i == 0 || i == (rows - 1) || j == 0 || j == (cols - 1))
            {

                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");          
    }
}

