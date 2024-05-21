// Input 10 elements in an array and sort the elements in descending order.
// Selection Sort 
#include<stdio.h>
int N = 10;
void main()
{
    int array[N], temp, i, j;
    printf("Enter any %d numbers:", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < N-1; i++)
    {
        for (j = i+1; j < N; j++)
        {
            if (array[i] < array[j]) // let array[i] be the greatest.
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        } 
    }
    printf("Being sorted in descending order as,\n");
    for (i = 0; i < N; i++)
    {
        printf("%d  ", array[i]);
    }
}

