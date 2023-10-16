#include <stdio.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase character to uppercase
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string and convert to uppercase
    toUpperCase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}

