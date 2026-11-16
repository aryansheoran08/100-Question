#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];
}

int main() {
    struct Student s[5], top;
    int i;

    // Input student details
    for (i = 0; i < 5; i++) {
        printf("\nEnter name, roll number and marks of student %d:\n", i + 1);
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Function returns the top student's structure
    top = findTopStudent(s, 5);

    // Display top student
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}