// Input different data types and show their values using all types of format specifiers.
#include<stdio.h>
void main()
{
    char letter ='Y', word[20] = "Rohan Shakya";
    int a = - 10234, b = 34252;
    float x = 12345.67890;
    // printf("Specifiers for printing nothing: %n\n");
    printf("Specifiers for printing percent symbol: %%\n");

    // String format specifiers.
    printf("For character specifiers: %c\n", letter);
    printf("For string specifiers: %s\n", word);
    printf("For pointer specifiers: %p\n", letter);

    // Integer format specifiers.
    printf("For signed integer specifiers: %d\n", a);
    printf("For unsigned integer specifiers: %i , %u\n", b, b);// doesnot take -ve value.
    printf("For long integer specifiers: %ld , %li\n", a, b);
    printf("For unsigned long specifiers: %lu\n", b);
    printf("For long long integer specifiers: %lli %lld\n", (long long)a, b);
    printf("For unsigned long long specifiers: %llu\n", b);
    printf("For  octal specifiers: %o\n", b);
    printf("For hexadecimal specifiers: %0x, %0X, %x, %X\n", b, b, b, b);
    
    // Floating-point format specifiers.
    printf("For float specifiers: %f\n", x);
    printf("For float type with current precision specifiers: %g , %G\n", x, x);
    printf("For scientific notatation for floats specifiers: %e, %E\n", x, x);
    
    printf("For double specifiers: %lf\n", x);
    printf("For long double specifiers: %Lf\n",(long double) x);

}