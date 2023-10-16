#include <stdio.h>
#include <string.h>

// Function to replace all occurrences of a substring with another substring
void replaceSubstring(char *str, const char *search, const char *replace) {
    int len = strlen(str);
    int searchLen = strlen(search);
    int replaceLen = strlen(replace);

    char result[2 * len]; // Create a result string with enough space

    int i, j, k;
    i = j = k = 0;

    while (i < len) {
        // Check if the substring to be replaced is found
        if (strncmp(&str[i], search, searchLen) == 0) {
            // Copy the replacement substring
            strncpy(&result[j], replace, replaceLen);
            j += replaceLen;
            i += searchLen;
        } else {
            // Copy the original character
            result[j] = str[i];
            j++;
            i++;
        }
    }

    result[j] = '\0';

    // Copy the result back to the original string
    strcpy(str, result);
}

int main() {
    char str[1000];
    char search[100];
    char replace[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to replace: ");
    fgets(search, sizeof(search), stdin);

    printf("Enter the replacement substring: ");
    fgets(replace, sizeof(replace), stdin);

    // Remove newline characters from the inputs
    str[strcspn(str, "\n")] = '\0';
    search[strcspn(search, "\n")] = '\0';
    replace[strcspn(replace, "\n")] = '\0';

    // Call the function to replace the substring
    replaceSubstring(str, search, replace);

    printf("Modified string: %s\n", str);

    return 0;
}

