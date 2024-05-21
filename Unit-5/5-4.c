// Read the values for x and n and evaluate y = x power n. 
// Program must have a function to calculate the result and return it.
#include<stdio.h>
#include<math.h>
int result(int, int);

void main()
{
    int x, n;
    printf("Enter the integer value for x:");
    scanf("%d", &x);
    printf("Enter the integer value for n:");
    scanf("%d", &n);
    printf("The result for x = %d to the power n = %d is %d.", x, n, result(x, n));
}

int result(int x, int n)
{
    int y = pow(x, n);
    return y;
}
