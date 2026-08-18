#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (character == 'a' || character == 'u' || character == 'e' ||
        character == 'i' || character == 'o') {
        printf("%c is a vowel", character);
    } else {
        printf("%c is a consonant", character);
    }

    return 0;
}