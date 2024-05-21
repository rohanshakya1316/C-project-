// Input three sides of a triangle and display its area.
#include<stdio.h>
#include<math.h>
void main()
{
    float sd1, sd2, sd3, sp, area;
    printf("Enter the three sides of triangle: ");
    scanf("%f%f%f", &sd1, &sd2, &sd3);
    sp = (sd1 + sd2 + sd3)/2;
    area = sqrt(sp*(sp-sd1)*(sp-sd2)*(sp-sd3));
    printf("The area of the triangle is %f", area);
}