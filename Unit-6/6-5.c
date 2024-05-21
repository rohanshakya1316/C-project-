// Read an array of n size and sort in ascending order using pointer.
#include<stdio.h>
void sort(int, int*);
void main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size], *ptr_arr;
    ptr_arr = arr;
    sort(size, ptr_arr);
}
void sort(int n, int* ptr)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < n - 1; i++)  // selection sort
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }  
        }
    }
    printf("After sorting in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(ptr + i));
    }  
}