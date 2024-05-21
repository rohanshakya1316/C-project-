// Find the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c;
    double discriminant, root1, root2;
    printf("Enter the coefficients a(a != 0), b and c resp.: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    if(discriminant > 0)
    {
        printf("The two roots are real and uneqal:\n");
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("Root 1 is %.2lf.\n", root1); // .2 in %f to control decimal places
        printf("Root 2 is %.2lf.", root2);
    }
    else if(discriminant == 0)
    {
        printf("The two roots are real and equal:\n");
        root1 = -b/(2*a);
        printf("Root is %.2lf.", root1);
    }
    else
    {
        double realpart = -b /(2 * a);
        double imaginarypart = sqrt(-discriminant)/(2*a);
        printf("The two roots are imaginary and unequal:\n");
        printf("Root 1 is %.3lf + %.2lfi.\n", realpart, imaginarypart);
        printf("Root 2 is %.3lf - %.2lfi.", realpart, imaginarypart);
    }
}


