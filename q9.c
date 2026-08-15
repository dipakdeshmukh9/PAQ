#include <stdio.h>

void binary(int n) {
    int bin[32], i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    while (i > 0) {
        printf("%d", bin[--i]);
    }
}

int main() {
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);

    printf("Binary equivalent: ");
    binary(num);

    printf("\nOctal equivalent: %o", num);
    printf("\nHexadecimal equivalent: %X", num);

    return 0;
}