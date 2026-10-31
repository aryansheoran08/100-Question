#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;
    double average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (double)sum / count;

        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}