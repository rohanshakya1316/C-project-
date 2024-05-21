// Generate Fibonacci series using function.
#include<stdio.h>
void fibo(int);
void main()
{
    int n;
    printf("Enter how many terms to display:");
    scanf("%d", &n);
    fibo(n);
}
void fibo(int num)
{
    int first = 0, second = 1, next;
    for (int i = 0; i < num; i++)
    {
        printf("%d  ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
}