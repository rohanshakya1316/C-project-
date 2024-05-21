// Print the sum of the following series with recursive function.
// 1^2 - 2^2 + 3^2 - 4^2 ... nth terms.
#include<stdio.h>
#include<math.h>
int series(int, int, int);
void main()
{
    int num, sum;
    printf("Enter the number of terms:");
    scanf("%d", &num);
    sum = series(num, 1, 1);
    printf("The sum of the series till %d terms is %d.", num, sum);
}

int series(int n, int term_number, int sign)
{
    if (n == 0)
    {
        return 0;
    }
    int current_term = term_number * term_number * sign;
    return current_term + series(n - 1, term_number + 1, -sign);
    
}