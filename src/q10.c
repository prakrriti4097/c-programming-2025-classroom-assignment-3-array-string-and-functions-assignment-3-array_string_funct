// Write a C program to concatenate two strings without using the built-in string functions.
#include<stdio.h>
int main (){
    char str1[100], str2[100];
    int i, j, length1 = 0, length2 = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    while(str1[length1] != '\0' && str1[length1] != '\n'){
        length1++;
    }

    while(str2[length2] != '\0' && str2[length2] != '\n'){
        length2++;
    }

    for(i = 0; i < length2; i++){
        str1[length1 + i] = str2[i];
    }
    str1[length1 + length2] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}