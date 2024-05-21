// Enter 15 elements in an array and display their sum and average.
#include<stdio.h>
int N = 15;
void main()
{
    int array[N], sum = 0, i;
    int avg = 0;
    printf("Enter any 15 integers: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < N; i++)
    {
        sum += array[i];
    }
    avg = sum / N;
    printf("The total sum of entered numbers is %d.", sum);
    printf("\nThe average of entered numbers is %d.", avg);
   
}
