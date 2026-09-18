#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols;
    int i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            // Traverse upward
            i = (d < rows) ? d : rows - 1;
            j = d - i;

            while (i >= 0 && j < cols) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        } else {
            // Traverse downward
            j = (d < cols) ? d : cols - 1;
            i = d - j;

            while (j >= 0 && i < rows) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
