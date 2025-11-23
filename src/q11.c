// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>
int main () {
    int arr[100], n, i;
    double sum = 0.0, average;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}
