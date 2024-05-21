// Input a number and check it for palindrome.
#include<stdio.h>
void main()
{
    int num, rem, revNum = 0, oriNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    oriNum = num; 

    for (; num > 0; num /= 10)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
    }

    if (oriNum == revNum)
        printf("Entered number is palindrome");
    else 
        printf("Entered number is not palindrome");
}

