// Display the series 1,2,5,10,... upto nth terms.
#include<stdio.h>
void main()
{
    int terms, num ;
    printf("Enter upto which terms: ");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++)
    {
        num = i * i + 1;
        printf("%d", num);
        if (i < (terms - 1))
            printf(", ");
        else 
            printf(".");
    }
}
