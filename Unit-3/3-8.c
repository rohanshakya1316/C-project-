// Check whether the entered year is a leap year or not.
#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year in AD: ");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("The entered year %d A.D is a leap year.", year);
    else
        printf("The entered year %d A.D is not a leap year.", year);
}

