// Input n numbers in an array and display the largest and smallest numbers.
#include<stdio.h>
#define MAX 100
void main()
{
    int array[MAX], size = 0, i;
    int largest, smallest;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter any %d intergers:", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    largest = array[0];
    smallest = array[0];
    for (i = 0; i < size; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
        }
        if (largest < array[i])
        {
            largest = array[i];
        }       
    }
    printf("The largest number is %d.\n", largest);
    printf("The smallest number is %d.", smallest);
}