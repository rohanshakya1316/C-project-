// Show the sum of 1^2+2^2/3, 2^2+3^2/4, 3^2+4^2/5,....
#include<stdio.h>
#include<math.h>
void main()
{
    int terms;
    float num = 0, sum = 0;
    printf("Enter how many terms to sum:");
    scanf("%d", &terms);
    for (float i = 1; i <= terms; i++)
    {
        num = pow(i, 2) + pow(i + 1, 2 /(i + 2));
        printf("%.2f  ", num);
        sum = sum + num;
    }
    printf("\nThe sum is %.2f.", sum);

}


