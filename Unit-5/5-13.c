// Display the value of y = x power n using recursive function.
#include<stdio.h>
int value(int, int);
void main()
{
    int x, n, y;
    printf("Enter the value for x and n:");
    scanf("%d %d", &x, &n);
    y = value(x, n);
    printf("The value of y = x power n is %d.", y);
}
int value(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * value(x, n - 1);
    
}