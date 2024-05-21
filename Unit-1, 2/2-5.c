// Read a decimal number from the keyboard and display its equivalent 
// octal number, hexadecimal number and character representation.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter any number you want to convert into octal, hex and ASCII:");
    scanf("%d", &num);
    printf("The octal equivalent of %d is %o.\n", num, num);
    printf("The hexadecimal equivalent of %d is %0x.\n", num, num);
    printf("The character representation of %d is %c.", num, num);
}