// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.
#include <stdio.h>
void calculateBinary(int n, char binary[], int *index) {
    if (n == 0) {
        return;
    }
    calculateBinary(n / 2, binary, index);
    binary[(*index)++] = (n % 2) + '0';
} int main () {
    int n;
    char binary[32];
    int index = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Binary representation is not defined for negative numbers.\n");
    } else if (n == 0) {
        printf("Binary representation of 0 is 0\n");
    } else {
        calculateBinary(n, binary, &index);
        binary[index] = '\0'; // Null-terminate the string

        printf("Binary representation of %d is %s\n", n, binary);
    }

    return 0;
}