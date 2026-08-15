#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char names[10][50];
    char *ptr[10];
    int n, i;

    printf("Enter number of students (maximum 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid number of students.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", names[i]);
        ptr[i] = names[i];
    }

    qsort(ptr, n, sizeof(char *), compare);

    printf("\nNames in alphabetical order:\n");

    for (i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}