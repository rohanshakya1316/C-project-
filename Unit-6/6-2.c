// Take three variables x, y, z and write a function to circularly right shift their values. 
// For eg. if x=2, y=3, z=4 then result should be y=2, z=3 and x=4.
#include<stdio.h>
void swap(int*, int*, int*);
void main()
{
    int x = 2, y = 3, z = 4; 
    int *a, *b, *c;
    a = &x;
    b = &y;
    c = &z;
    printf("Initial values before circularly right shifting values are:\n");
    printf("x = %d, y = %d, z = %d.\n", *a, *b, *c);
    swap(&x, &y, &z);
    printf("Values after circularly right shifting are:\n");
    printf("result: x = %d, y = %d, z = %d.\n", x, y, z);

}

void swap(int *a, int *b, int *c)
{
    int temp;
    temp = *c; // temp holds value of c.
    *c = *b;   // c is updated with value of b.
    *b = *a;   // b is upadated with value of a.
    *a = temp; // a is updated with value at temp.
}
    

