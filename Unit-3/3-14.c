// Find the smallest and largest number among 50 input numbers.
#include<stdio.h>
void main()
{
    int num, small, large, i;
    printf("Enter 10 number:");
    scanf("%d", &num);
    small = num;
    large = num;
    for (i = 1; i < 10; i++)
    {
        scanf("%d", &num);
        if (large < num)
        {
            large = num;
        }
        else if (small > num)
        {
            small = num;
        }
    }
    printf("The largest number is %d.\n", large);
    printf("The smallest number is %d.\n", small);
}

