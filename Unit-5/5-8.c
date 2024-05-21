// Enter 10 integers and return the largest and smallest of them by passing the array to function.
#include<stdio.h>
void large(int[]);
void small(int[]);
void main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    large(num); 
    small(num); 
}
void large(int arr[])
{
    int large, i, j = 0;
    large = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
            j = i;
        } 
    }
    printf("The largest element is %d which is elment %d.\n", large, j + 1);
}
void small(int arr[])
{
    int small, i, j = 0;
    small = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            j = i;
        } 
    }
    printf("The smallest element is %d which is elment %d.\n", small, j + 1);
}