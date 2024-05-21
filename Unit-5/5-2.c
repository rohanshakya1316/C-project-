// Demonstrate the function call by value and call by reference.
#include<stdio.h>
void value(int, int);
void reference(int*, int*);
void main()
{
    int a = 20, b = 10;
    value(a, b);
    reference(&a, &b);
    printf("main (Calling function):\n");
    printf("The value of a = %d and b = %d.\n", a, b);
}

 // Call by value
void value(int a, int b)
{
    a = 10;
    b = 20;
    printf("Call by value (Called function):\n");
    printf("The value of a = %d and b = %d.\n", a, b);
}

 // Call by reference
void reference(int* a, int* b)
{
    *a = 100;
    *b = 200;
    printf("Call by reference (Called function):\n");
    printf("The value of a = %d and y = %d.\n", *a, *b);
}

