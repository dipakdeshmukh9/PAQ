#include <stdio.h>
#include <string.h>

int main() {
    char str[10][50] = {
        "Apple",
        "Banana",
        "Mango",
        "Apple",
        "Orange",
        "Banana",
        "Grapes",
        "Mango",
        "Apple",
        "Grapes"
    };

    int i, j, k;
    int duplicate;

    printf("Duplicate strings:\n");

    for (i = 0; i < 10; i++) {
        duplicate = 0;

        for (j = 0; j < i; j++) {
            if (strcmp(str[i], str[j]) == 0) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 1)
            continue;

        for (k = i + 1; k < 10; k++) {
            if (strcmp(str[i], str[k]) == 0) {
                printf("%s\n", str[i]);
                break;
            }
        }
    }

    return 0;
}