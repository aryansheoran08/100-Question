
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name, roll number and marks: ");
        scanf("%49s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error reading file!");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll No.\tMarks\n");

    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("%s\t%d\t\t%.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
