// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.
#include <stdio.h>
int calculateSumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + calculateSumOfDigits(n / 10);
}
int main () {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Sum of digits is not defined for negative numbers.\n");
    } else {
        int sum = calculateSumOfDigits(n);
        printf("Sum of digits of %d is %d\n", n, sum);
    }

    return 0;
}