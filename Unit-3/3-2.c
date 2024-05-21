/* Input a number and check for odd or even. If it is even then 
display its square and cube but display only its cube if is is odd. */
#include<stdio.h>
void main()
{
    int num, cube;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Entered number %d is even.\n", num);
        int sqr = num * num;
        cube = sqr * num;
        printf("The square and cube of %d is %d and %d respectively.\n", num, sqr, cube);
    }
    else
    {
        printf("Entered number %d is odd.\n", num);
        cube = num * num * num;
        printf("The cube of %d is %d.\n", num, cube);
    }
}
