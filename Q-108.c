#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int nums[n], answer[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product of elements before each index
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Multiply by product of elements after each index
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print answer
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(", ");
    }

    return 0;
}