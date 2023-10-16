#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char firstNonRepeatingChar(const char *str) {
    int count[MAX_CHAR] = {0}; // Initialize character count array

    // Count the occurrences of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Find the first non-repeating character by iterating the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            return str[i];
        }
    }

    // If there is no non-repeating character, return '\0' (null character)
    return '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';

    char result = firstNonRepeatingChar(str);

    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("There are no non-repeating characters in the string.\n");
    }

    return 0;
}
