//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>
int main () {
    int n, i, factorial;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    printf("Factorial series up to %d:\n", n);
    for (i = 0; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("%d! = %d\n", i, factorial);
    }

    return 0;
}