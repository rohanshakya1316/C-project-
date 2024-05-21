// Print Fibonacci series up to the nth terms starting from 0, 1.
#include<stdio.h>
void main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the terms upto where you want to display:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

