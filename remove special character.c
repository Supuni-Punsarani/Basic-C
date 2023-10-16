#include <stdio.h>

void removeChar(char *str, char toRemove) {
    int dst = 0; // Destination index

    // Iterate through the string
    for (int src = 0; str[src] != '\0'; src++) {
        // If the current character is not equal to the character to remove
        if (str[src] != toRemove) {
            // Copy the current character to the destination index
            str[dst++] = str[src];
        }
    }

    // Null-terminate the modified string
    str[dst] = '\0';
}

int main() {
    char str[1000];
    char toRemove;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf(" %c", &toRemove); // Note the space before %c to consume any newline character left by previous input

    removeChar(str, toRemove);

    printf("String after removing '%c': %s\n", toRemove, str);

    return 0;
}

