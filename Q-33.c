#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate the sum of powers of digits
    while (temp != 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
