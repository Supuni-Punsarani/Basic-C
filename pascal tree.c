#include <stdio.h>

long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n, i, j;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= n - i - 2; j++) {
            printf("  "); // Print spaces for formatting
        }
        for (j = 0; j <= i; j++) {
            // Calculate and print the binomial coefficient
            long coef = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%4ld   ", coef);
        }
        printf("\n");
    }

    return 0;
}

