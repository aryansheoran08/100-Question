
#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the kth smallest element
    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    }

    return 0;
}
