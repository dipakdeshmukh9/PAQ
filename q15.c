#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
            count[str[i] - 'a']++;
        }
    }

    printf("\nAlphabet occurrences:\n");

    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}