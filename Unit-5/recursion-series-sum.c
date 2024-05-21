// Print the sum of the following series with recursive function.
// 1^2 - 2^2 + 3^2 - 4^2 ... nth terms.
#include <stdio.h>

// Function to calculate the sum of the series
int calculateSum(int n, int termNumber, int sign) {
    // Base case: if n becomes 0, return 0
    if (n == 0) {
        return 0;
    }

    // Calculate the current term
    int currentTerm = termNumber * termNumber * sign;

    // Recursively calculate the sum of the remaining terms
    return currentTerm + calculateSum(n - 1, termNumber + 1, -sign);
}

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and print the sum of the series
    int sum = calculateSum(n, 1, 1);
    printf("Sum of the series: %d\n", sum);

    return 0;
}
