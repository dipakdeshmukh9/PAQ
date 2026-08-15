#include <stdio.h>

struct Student {
    char name[50];
    char rollNumber[20];
    float totalMarks;
};

int main() {
    struct Student student;

    printf("Enter student name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter roll number: ");
    scanf("%s", student.rollNumber);

    printf("Enter total marks: ");
    scanf("%f", &student.totalMarks);

    printf("\n--- Student Details ---\n");
    printf("Student Name: %s\n", student.name);
    printf("Roll Number: %s\n", student.rollNumber);
    printf("Total Marks: %.2f\n", student.totalMarks);

    return 0;
}