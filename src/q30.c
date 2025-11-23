//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>
int countOccurrencesHelper(char str[], char ch, int index, int length) {
    if (index >= length) {
        return 0; // Base case: end of string
    }
    int count = (str[index] == ch) ? 1 : 0; // Check current character
    return count + countOccurrencesHelper(str, ch, index + 1, length); // Recursive case
} int main () {
    char str[100], ch;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count its occurrence: ");
    scanf(" %c", &ch);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int occurrences = countOccurrencesHelper(str, ch, 0, length);
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrences);

    return 0;
}