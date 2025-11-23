// Implement a C program to count the occurrence of a specific character in a string.
#include<stdio.h>
int main (){
    char str[100], ch;
    int i, count = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count its occurrence: ");
    scanf(" %c", &ch);

    while(str[length] != '\0' && str[length] != '\n'){
        length++;
    }

    for(i = 0; i < length; i++){
        if(str[i] == ch){
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}