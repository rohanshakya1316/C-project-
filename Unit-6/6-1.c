// Find the sum of two integer using the concept of pointer.
#include<stdio.h>
int sum(int*, int*);
void main()
{
    int num1, num2, total = 0; 
    printf("Enter any two integers:");
    scanf("%d %d", &num1, &num2);
    total = sum(&num1, &num2);
    printf("The sum of %d and %d is %d.", num1, num2, total);

}
int sum(int *x, int *y)
{
    int add = 0; 
    add = *x + *y; 
    return add;
}