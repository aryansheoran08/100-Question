
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%999s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int len = 0;

        for (int j = i; j < n; j++) {
            unsigned char ch = s[j];

            if (visited[ch])
                break;

            visited[ch] = 1;
            len++;
        }

        if (len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);

    return 0;
}
