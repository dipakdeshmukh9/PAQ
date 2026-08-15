#include <stdio.h>

int main() {
    int first, second, i, j;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    for (i = first; i <= second; i++) {
        printf("\nMultiplication table of %d:\n", i);

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}