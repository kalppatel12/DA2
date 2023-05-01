// pat-2
// Write a c program to find the number of  words,vowels, consonants, space and special characters in a string

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, special = 0, words = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isspace(str[i])) {
            spaces++;
            words++;
        } else {
            special++;
        }
    }
    words++;
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of special characters: %d\n", special);
    printf("Number of words: %d\n", words);
    return 0;
}