// Input integer numbers in an array of n size and display their average using the concept of pointer.
#include<stdio.h>
float average(int, int*);
void main()
{
    int size; 
    float avg;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size], *ptr_arr;
    ptr_arr = arr;
    avg = average(size, ptr_arr);
    printf("The average of the elements in array is %.2f.", avg);
}

float average(int n, int* p)
{
    int sum = 0;
    float avg = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter elment %d:", i + 1);
        scanf("%d", p + i);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    avg = (float) sum / n;
    return avg;   
}



// int size;
//     printf("Enter the size of the array:");
//     scanf("%d", &size);
//     int arr[size], *ptr_arr, sum = 0;
//     float avg = 0;
//     ptr_arr = arr;
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter elment %d:", i + 1);
//         scanf("%d", ptr_arr + i);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + *(ptr_arr + i);
//     }
//     avg = (float) sum / size;
//     printf("The average of the elements in array is %f.", avg);
    