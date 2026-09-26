#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            int end = i - 1;

            // Reverse the current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("Output: %s", str);

    return 0;
}