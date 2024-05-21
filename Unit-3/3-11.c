// Input a number and display the sum of all the numbers from 1 to that number.
#include<stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter number upto where you want the sum: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of natural number upto %d is %d.", n, sum);
}