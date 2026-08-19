#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else if (ch == ' ' || ch == ' ' || ch == '\n') {
        printf("Whitespace");
    }
    else {
        printf("Special character");
    }

    return 0;
}