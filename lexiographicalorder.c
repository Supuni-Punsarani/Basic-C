#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to generate all permutations of a string
void permute(char str[], int l, int r, char permutations[][100], int *count) {
    if (l == r) {
        strcpy(permutations[(*count)++], str);
    } else {
        for (int i = l; i <= r; i++) {
            // Swap the current character with the first character
            char temp = str[l];
            str[l] = str[i];
            str[i] = temp;

            // Recursively generate permutations
            permute(str, l + 1, r, permutations, count);

            // Backtrack to the original string
            temp = str[l];
            str[l] = str[i];
            str[i] = temp;
        }
    }
}

int main() {
    int N;
    printf("Enter the number of words: ");
    scanf("%d", &N);

    char words[N][100];  // Assuming each word has a maximum length of 100 characters
    char chosen[N];
    char permutations[N * N][100];  // Maximum number of permutations
    int count = 0;

    // Input N words and choose the first letter
    printf("Enter %d words:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
        chosen[i] = words[i][0];
    }

    // Generate all permutations of the chosen letters
    char chosenStr[N + 1];
    chosenStr[N] = '\0';
    permute(chosen, 0, N - 1, permutations, &count);

    // Find the lexicographically smallest word from permutations
    char smallestWord[100];  // Assuming the result word has a maximum length of 100 characters
    strcpy(smallestWord, permutations[0]);
    for (int i = 1; i < count; i++) {
        if (strcmp(permutations[i], smallestWord) < 0) {
            strcpy(smallestWord, permutations[i]);
        }
    }

    printf("The lexicographically smallest word is: %s\n", smallestWord);

    return 0;
}
