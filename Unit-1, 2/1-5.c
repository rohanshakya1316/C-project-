// Input an arithmetic operator and two numbers and perfrom the calculations accordingly.
#include<stdio.h>
void main()
{
    char operator;
    int num1, num2;
    printf("Enter the arithmetic operator(+,-,*,/,%%): ");
    scanf("%c", &operator);
    printf("Enter any two integer number: ");
    scanf("%d%d", &num1, &num2);
    if(operator == '+')
        printf("The sum of %d and %d is %d", num1, num2, num1+num2);
    else if(operator == '-')
        printf("The difference of %d and %d is %d", num1, num2, num1-num2);
    else if(operator == '*')
        printf("The product of %d and %d is %d", num1, num2, num1*num2);
    else if(operator == '/')
        printf("The quotient of %d and %d is %d", num1, num2, num1/num2);
    else if(operator == '%')
        printf("The remainder of %d and %d is %d", num1, num2, num1%num2);
    else
        printf("Please enter the correct arithmetic operator(+,-,*,/,%%)");
}

