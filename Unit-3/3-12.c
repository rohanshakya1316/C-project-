// Count the positive numbers out of 1 to 50 input numbers.
#include<stdio.h>
void main()
{
    int num, count = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter any number (input %d):", i);
        scanf("%d", &num);
        if (num > 0)
        {
            count ++;
        }       
    }
    printf("Total numbers of positive number entered is %d.", count);
}

