// Find the largest of among three entered numebers.
#include<stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter any three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf("The largest number among %d, %d and %d is %d.", num1, num2, num3, num1);
    else if(num2 > num1 && num2 > num3)
        printf("The largest number among %d, %d and %d is %d.", num1, num2, num3, num2);
    else if(num3 > num1 && num3 > num2)
        printf("The largest number among %d, %d and %d is %d.", num1, num2, num3, num3);
    else
        printf("All the entered numbers are equal.");
}

