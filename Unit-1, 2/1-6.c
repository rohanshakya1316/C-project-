// Input two numbers and check for their equality.
#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if(num1 == num2)
        printf("The entered numbers are equal.");
    else
        printf("The entered numbers arenot equal.");
    
}