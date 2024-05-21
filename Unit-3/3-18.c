// Display the series 7, 22, 11,... upto 20th terms using do ... while loop.
#include<stdio.h>
void main()
{
    int i = 1, terms = 20, num = 7;
    do
    {
        printf("%d ", num);
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = 3 * num + 1;
        }

        i++;
    } while (i <= terms);
    
}

