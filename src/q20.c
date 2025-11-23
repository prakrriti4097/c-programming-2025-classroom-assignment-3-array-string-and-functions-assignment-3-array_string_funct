// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).
#include <stdio.h>
int main () {
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD is %d\n", a);
    return 0;
}