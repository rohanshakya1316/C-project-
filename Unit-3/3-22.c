// Display all the prime numbers between 10 to 100.
#include<stdio.h>
void main()
{
    int origin_num, i, j, count;
    printf("The prime numbers between 10 to 100 are as follows:\n");
    for (i = 10; i < 100; i++)
    {
        origin_num = i;
        count = 0;
        for (j = 2; j < i/2; j++)
        {
           
            if (origin_num % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d  ", i);
        }  
    }   
}

