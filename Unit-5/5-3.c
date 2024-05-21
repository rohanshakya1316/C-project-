// Find the largest among three numbers using user defined function.
// Result should be display from main function.
#include<stdio.h>
int large(int x, int y, int z) // function definition
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else 
        return z;
}

void main()
{
    int num1, num2, num3, largest;
    printf("Enter any three numbers to compare the largest:");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest = large(num1, num2, num3); // calling function
    printf("The largest number is %d.", largest);
}