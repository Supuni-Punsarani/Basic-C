
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void trimSpaces(char *str) {
    int length = strlen(str);
    int start = 0, end = length - 1;

    // Find the position of the first non-space character from the left
    while (start <= end && str[start] == ' ') {
        start++;
    }

    // Find the position of the first non-space character from the right
    while (end >= start && str[end] == ' ') {
        end--;
    }

    // Shift the non-space characters to the beginning of the string
    int i, j;
    for (i = start, j = 0; i <= end; i++, j++) {
        str[j] = str[i];
    }

    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the input
    str[strcspn(str, "\n")] = '\0';

    // Trim leading and trailing spaces
    trimSpaces(str);

    printf("Trimmed string: %s\n", str);

    return 0;
}
