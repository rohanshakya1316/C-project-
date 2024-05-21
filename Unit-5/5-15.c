// Display the sum of n natural numbers using recursive function.
#include<stdio.h>
int sum(int);
void main()
{
    int n; 
    printf("Enter the natural number upto where you want to sum:");
    scanf("%d", &n);
    int nsum = sum(n);
    printf("The sum of natural number upto %d is %d.", n, nsum);
}
int sum(int num)
{
    if (num >= 0)
    {
        return (num + sum(num - 1));

    }
    else
    {
        return 0;
    }
}
