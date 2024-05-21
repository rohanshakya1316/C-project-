#include <stdio.h>

void circularRightShift(int *x, int *y, int *z) {
    int temp = *z;  // Store the value of z in a temporary variable

    *z = *y;        // Update z with the value of y
    *y = *x;        // Update y with the value of x
    *x = temp;      // Update x with the stored value of z
}

int main() {
    // Example usage
    int x = 2, y = 3, z = 4;

    printf("Before circular right shift: x=%d, y=%d, z=%d\n", x, y, z);

    circularRightShift(&x, &y, &z);

    printf("After circular right shift: x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}
