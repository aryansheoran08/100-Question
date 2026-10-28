
#include <stdio.h>

int main() {
    char filename[100];
    char ch;
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
    } else {
        printf("File content:\n");

        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
