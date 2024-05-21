// Input an integer number and test whether it is exactly divisible by 3 but not by 5.
#include<stdio.h>
void main()
{
    int num1, n;
    printf("Enter any number as your wish:\n");
    scanf("%d", &num1);
    if(num1 % 3 == 0 && num1 % 5 != 0)
    {
        n = num1 / 3;
        printf("The number %d is divisible by 3 but not by 5.\n", num1);
        printf("Its quotient is %d, if divide by 3.", n);
    }
    else
        printf("The number %d is divisble by both 3 and 5.", num1);
    
}

