// Write a C program that accepts a string as input,print the length of the string and display the word fequency, then use pointers to find the first repeated and non-repeated character in the string, and print the output:

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int len = strlen(str) - 1;
    int words = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            words++;
        }
    }
    printf("Length of the string: %d\n", len);
    printf("Word frequency: %d\n", words);
    char* ptr = str;
    char* repeat = NULL;
    while (*ptr != '\0') {
        repeat = strchr(ptr + 1, *ptr);
        if (repeat != NULL) {
            printf("First repeated character: %c\n", *repeat);
            break;
        }
        ptr++;
    }
    if (repeat == NULL) {
        printf("There are no repeated characters.\n");
    }
    ptr = str;
    char* non_repeat = NULL;
    while (*ptr != '\0') {
        non_repeat = strchr(ptr + 1, *ptr);
        if (non_repeat == NULL) {
            printf("First non-repeated character: %c\n", *ptr);
            break;
        }
        ptr++;
    }
    if (non_repeat == NULL) {
        printf("There are no non-repeated characters.\n");
    }
    return 0;
}