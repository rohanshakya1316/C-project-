// Find the sum of series 1+(1+2)+(1+2+3)....
#include<stdio.h>
void main()
{
    int terms, num, sum = 0;
    printf("Enter number of terms:");
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        num += i;
        printf("%d", num);
        if (i < terms)
        {
        printf(" + ");
        }
        sum = sum + num;
    }
    printf("\nThe sum of the above series is %d.", sum);
}


