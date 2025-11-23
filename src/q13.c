// Write a function named find Factorial that takes an integer as input and returns its factorial.
#include <stdio.h>
int findFactorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    }
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
} int main () {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int result = findFactorial(n);
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", n, result);
    }

    return 0;
} 
