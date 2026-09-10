#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, max = 0, mostFrequent;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Handle negative numbers
    if (n < 0)
        n = -n;

    // Count digits
    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n > 0) {
            digit = n % 10;
            freq[digit]++;
            n /= 10;
        }
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            mostFrequent = i;
        }
    }

    printf("Most frequent digit: %d\n", mostFrequent);
    printf("Occurs %d times\n", max);

    return 0;
}
