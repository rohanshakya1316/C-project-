// Show factorial of an integer using recursive function.
#include<stdio.h>
int factorial(int);
void main()
{
    int num;
    printf("Enter any number to find factorial:");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("The factorial of %d is %d.", num, fact);
}
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else 
    {
        return(num * factorial(num - 1));
    }
    
}
