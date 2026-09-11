#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target;
    int low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &target);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
