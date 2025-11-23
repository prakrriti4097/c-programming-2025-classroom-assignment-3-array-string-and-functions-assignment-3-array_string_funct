// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>
int calculatePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * calculatePower(base, exponent - 1);
}
int main () {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = calculatePower(base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);
    return 0;
}