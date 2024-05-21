// Demonstrate implicit and explicit type casting.
#include<stdio.h>
void main()
{
    int a = 65, b = 4; 
    float u = 23.89765;

    //Implicit type casting.
    float c = a/b;
    double d = a/b;
    float e = (a/b);
    char c1, c2 = 'Z';
    c1 = a; // Demotion
    int i2 = c2; // Promotion
    printf("%f\n", c);
    printf("%f\n", d);
    printf("%f\n",e);
    printf("the character is %c.\n", c1);
    printf("the ASCII code is %i.\n", i2);

    //Explicit type casting.
    float x = (float)a / b;
    float y = (int)(u);
    double z = (double)u+a;
    printf("the type casted value is %f.\n", x);
    printf("%f\n", y); 
    printf("%lf\n", z);
    
}

