// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.
#include <stdio.h>
void printTriangle(int n, int currentRow) {
    if (currentRow > n) {
        return;
    }
    for (int i = 0; i < currentRow; i++) {
        printf("* ");
    }
    printf("\n");
    printTriangle(n, currentRow + 1);
}
int main () {
    int n;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);

    printTriangle(n, 1);
    return 0;
}