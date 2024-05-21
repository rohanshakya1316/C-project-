// Display the use of formatted input and output operations with scanf() and printf().
#include<stdio.h>
void main()
{
    char c1[20], c2 = 'z';
    int n1, n2 = 97;
    float n3, n4 = 4594.987654321;
    
    // formatted I/O for intergers.
    printf("Enter any integer:");
    scanf("%3d", &n1); //%3d in scanf reads 3 interger value.
    printf("The interger is %d.\n", n1);
    printf("The character is %c.\n", n2);
    printf("%6d\n", n2); // %6d specifer displays the value with 6 spaces.
    printf("%-6d\n", n2); // %-6d displays a value left aligned.
    printf("%06d\n", n2); // %06d fills empty spaces with zeroes.

    // formatted I/O for floating numbers.
    printf("Enter any floating number:");
    scanf("%3f", &n3);
    printf(" %50.2f.\n", n3);
    printf("%.2f\n", n4); // %.2f displays two digits after precision
    printf("%3.5f\n", n4); // %3.5f displays floating no. at least 3 width and precision 5
    
    //formatted I/O for strings.
    printf("Enter a string:");
    scanf("%10s", &c1);
    printf("The string is %7.6s.\n", c1); // %7.6s displays at least 7 width and prints 6 characters
    printf("The ASCII code of %c is %d.\n", c2, c2);

}
