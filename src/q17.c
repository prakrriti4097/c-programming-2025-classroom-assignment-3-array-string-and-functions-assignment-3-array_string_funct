// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include <stdio.h>
int main () {
    int base, exponent;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %lld\n", base, exponent, result);
    return 0;
}