// Print the series 1,2,4,7,11,... upto 100th terms using while loop.
#include<stdio.h>
void main()
{
    int terms, num = 1, increment = 1, i = 1;
    printf("Enter the terms of the series:");
    scanf("%d", &terms);
    while (i <= terms)
    {
        printf("%d", num);
        if (i < terms)
        {
            printf(", ");
        }
        else 
            printf(".");
        num += increment;
        increment ++;
        i ++;
    }
}

