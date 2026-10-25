
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, lastChar = '\0';

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            words++;
            inWord = 1;
        }

        lastChar = ch;
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
