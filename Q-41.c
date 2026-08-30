#include <stdio.h>

int main()
{
    int n, first, last, temp, p = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;

    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        p = p * 10;
    }

    first = temp;

    n = n - first * p - last;
    n = n + last * p + first;

    printf("After swapping: %d", n);

    return 0;
}
