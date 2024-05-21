// Print all prime numbers between the initial and final range n1 and n2 using function.
#include<stdio.h>
void prime(int, int);
void main()
{
    int initial, final;
    printf("Enter the range for displaying prime number:");
    scanf("%d %d", &initial, &final);
    prime(initial, final);
}
void prime(int n1, int n2)
{
    int i, j, count, temp;
    printf("The prime numbers between %d and %d is follows:\n", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        if (i == 0 || i == 1 || i < 0)
        {
            continue;
        }
        else
        {
            temp = i;
            count = 0;
            for (j = 2; j <= i / 2; j++)
            {
                if(temp % j == 0)
                {
                    count ++;
                }
                
            }
        }
        if (count == 0)
        {
            printf("%d  ", i);
        }
    }
}