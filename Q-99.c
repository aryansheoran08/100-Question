#include <stdio.h>
#include <string.h>

int main() {
    char date[20];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    date[2] = '\0';

    printf("%s-Apr-%s\n", date, date + 6);

    return 0;
}