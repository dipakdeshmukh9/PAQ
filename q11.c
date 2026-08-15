#include <stdio.h>

struct Employee {
    char firstName[30];
    char lastName[30];
    float monthlySalary;
};

void initializeEmployee(struct Employee *e) {
    printf("Enter first name: ");
    scanf("%s", e->firstName);

    printf("Enter last name: ");
    scanf("%s", e->lastName);

    printf("Enter monthly salary: ");
    scanf("%f", &e->monthlySalary);

    if (e->monthlySalary < 0) {
        e->monthlySalary = 0;
    }
}

void displayEmployee(struct Employee e) {
    printf("Name: %s %s\n", e.firstName, e.lastName);
    printf("Monthly Salary: %.2f\n", e.monthlySalary);
}

void modifySalary(struct Employee *e, float percentage) {
    e->monthlySalary = e->monthlySalary + (e->monthlySalary * percentage / 100);
}

void displayYearlySalary(struct Employee e) {
    printf("Yearly Salary: %.2f\n", e.monthlySalary * 12);
}

int main() {
    struct Employee emp1, emp2;

    printf("Enter details of Employee 1:\n");
    initializeEmployee(&emp1);

    printf("\nEnter details of Employee 2:\n");
    initializeEmployee(&emp2);

    printf("\n--- Employee Details ---\n");

    printf("\nEmployee 1:\n");
    displayEmployee(emp1);

    printf("\nEmployee 2:\n");
    displayEmployee(emp2);

    printf("\n--- Yearly Salary Before 10%% Increment ---\n");

    printf("Employee 1:\n");
    displayYearlySalary(emp1);

    printf("Employee 2:\n");
    displayYearlySalary(emp2);

    modifySalary(&emp1, 10);
    modifySalary(&emp2, 10);

    printf("\n--- Yearly Salary After 10%% Increment ---\n");

    printf("Employee 1:\n");
    displayYearlySalary(emp1);

    printf("Employee 2:\n");
    displayYearlySalary(emp2);

    return 0;
}