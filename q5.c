#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int upper = 0, lower = 0, digit = 0, other = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            upper++;
        else if (islower(str[i]))
            lower++;
        else if (isdigit(str[i]))
            digit++;
        else if (str[i] != '\n')
            other++;
    }

    printf("\nUppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Other characters: %d\n", other);

    return 0;
}