// Input two integer numbers in different variables and swap their values.
#include<stdio.h>
void main()
{
    int num1, num2, temp;
    printf("Enter two integers for swapping:");
    scanf("%d %d", &num1, &num2);
    printf("Before Swapping the values:\nnum1 = %d and num2 = %d", num1, num2);
    printf("\n");
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping the values:\nnum1 = %d and num2 = %d", num1, num2);
}