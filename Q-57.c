#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
