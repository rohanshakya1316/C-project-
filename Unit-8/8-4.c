// Create a structure complex and find the sum of two complex numbers using function.
#include<stdio.h>
struct complex  // Globally declared Structure
{
    double realpart;
    double imaginarypart;
};
// Declaring function as structure
struct complex complex_sum( struct complex, struct complex);
void main()
{ 
    struct complex num1, num2, sum;
    printf("Enter the realpart and imaginarypart of first number: ");
    scanf("%lf %lf", &num1.realpart, &num1.imaginarypart);
    printf("Enter the realpart and imaginarypart of second number: ");
    scanf("%lf %lf", &num2.realpart, &num2.imaginarypart);
    printf("\n");
    printf("Two complex number being inputted are: \n");
    printf("First Complex number: %.3lf + %.3lfi \n", num1.realpart, num1.imaginarypart);
    printf("Second Complex number: %.3lf + %.3lfi \n", num2.realpart, num2.imaginarypart);
    printf("\n");
    sum = complex_sum(num1, num2);
    printf("Displaying output from the main() function: \n");
    printf("Sum = %.3lf + %.3lfi\n", sum.realpart, sum.imaginarypart);
}

struct complex complex_sum(struct complex n1, struct complex n2)
{
    struct complex total;
    total.realpart = n1.realpart + n2.realpart;
    total.imaginarypart = n1.imaginarypart + n2.imaginarypart;
    printf("Displaying output from the called function: \n");
    printf("Total = %.3lf + %.3lfi\n", total.realpart, total.imaginarypart);
    printf("\n");
    return total;
}