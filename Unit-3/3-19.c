// Show all natural numbers from 1 to 100 except 18.
#include<stdio.h>
void main()
{
    for (int i = 1; i <= 100; i++)
    {
        
        if (i == 18)
        {
            continue;
            
        }
        printf("%d\t", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }
        
    }
}



