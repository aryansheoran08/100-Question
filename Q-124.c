#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    int i;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }

    printf("%s", s);

    return 0;
}