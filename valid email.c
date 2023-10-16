#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidEmail(const char *email) {
    int emailLength = strlen(email);
    bool foundAt = false;

    // Check for the '@' symbol
    for (int i = 0; i < emailLength; i++) {
        if (email[i] == '@') {
            foundAt = true;
            break;
        }
    }

    // If no '@' symbol is found or it's the first or last character, return false
    if (!foundAt || email[0] == '@' || email[emailLength - 1] == '@') {
        return false;
    }

    // Split the email into username and domain
    char username[100];
    char domain[100];

    int i = 0;
    // Copy characters before '@' into username
    while (email[i] != '@') {
        username[i] = email[i];
        i++;
    }
    username[i] = '\0';

    i++; // Skip '@'

    int j = 0;
    // Copy characters after '@' into domain
    while (i < emailLength) {
        domain[j] = email[i];
        i++;
        j++;
    }
    domain[j] = '\0';

    // Check if domain has at least one dot ('.')
    if (strchr(domain, '.') == NULL) {
        return false;
    }

    return true;
}

int main() {
    char email[100];

    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);

    // Remove newline character from the input
    email[strcspn(email, "\n")] = '\0';

    if (isValidEmail(email)) {
        printf("The email address is valid.\n");
    } else {
        printf("The email address is not valid.\n");
    }

    return 0;
}

