// Enter day number and display day name using switch...case statement.
#include<stdio.h>
void main()
{
    int num;
    printf("Please enter the day number: ");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
        printf("The day number %d is Sunday.", num);
        break;
        case 2:
        printf("The day number %d is Monday.", num);
        break;
        case 3:
        printf("The day number %d is Tuesday.", num);
        break;
        case 4:
        printf("The day number %d is Wednesday.", num);
        break;
        case 5:
        printf("The day number %d is Thursday.", num);
        break;
        case 6:
        printf("The day number %d is Friday.", num);
        break;
        case 7:
        printf("The day number %d is Saturday.", num);
        break;
        default:
        printf("Invalid day number. There are only 7 days.");
    }
}
