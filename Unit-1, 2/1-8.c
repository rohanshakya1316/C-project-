// Demonstrate the bitwise operator's implementation in C program.
#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);
    printf("The result of bitwise AND operator is %d.\n", (num1 & num2));
    printf("The result of bitwise OR operator is %d.\n", (num1 | num2));
    printf("The result of bitwise NOT operator of first number is %d.\n", (~num1));
    printf("The result of bitwise LEFT SHIFT operator is %d.\n", (num1 << num2));
    printf("The result of bitwise RIGHT SHIFT operator is %d.\n", (num1 >> num2));
    printf("The result of bitwise XOR operator is %d.\n", (num1 ^ num2));
}

