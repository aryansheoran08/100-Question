#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of nums[i]
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Majority element occurs more than n/2 times
        if (count > n / 2) {
            printf("%d", nums[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}