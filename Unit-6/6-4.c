// Display the largest and smallest elements passed to a function and result must be displayed from main function.
#include<stdio.h>
void compare(int, int*, int*, int*);
void main()
{
    int size, large, small;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size], *ptr_arr;
    ptr_arr = arr;
    for (int i = 0; i < size; i++)  // Input for array can also be taken in function definition.
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", (ptr_arr + i));
    }
    compare(size, ptr_arr, &large, &small);
    printf("The largest element is %d.\n", large);
    printf("The smallest element is %d.", small);
}
void compare(int n, int* p, int* large, int* small)
{ 
    *large = *p;
    *small = *p;
    for (int i = 0; i < n; i++)
    {
        if (*large < *(p + i))
        {
            *large = *(p + i);
        }
        else if (*small > *(p + i))
        {
            *small = *(p + i);
        }
    }  
}


// #include <stdio.h>

// // Function to find the largest and smallest elements in an array
// void findLargestAndSmallest(int arr[], int size, int *largest, int *smallest) {
//     // Initialize largest and smallest with the first element of the array
//     *largest = *smallest = arr;

//     // Iterate through the array to find the largest and smallest elements
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > *largest) {
//             *largest = arr[i];
//         } else if (arr[i] < *smallest) {
//             *smallest = arr[i];
//         }
//     }
// }

// int main() {
//     int arr[] = {4, 2, 9, 1, 7, 5, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int largest, smallest;

//     // Call the function to find the largest and smallest elements
//     findLargestAndSmallest(arr, size, &largest, &smallest);

//     // Display the results
//     printf("Largest element: %d\n", largest);
//     printf("Smallest element: %d\n", smallest);

//     return 0;
// }
