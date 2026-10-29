#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");

    if (in == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    out = fopen("output.txt", "w");

    if (out == NULL) {
        printf("Error opening output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper((unsigned char)ch), out);
    }

    printf("Text converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);

    return 0;
}