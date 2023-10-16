#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step 1: Stack Allocation
    int stackVar = 42; // Allocated on the stack

    // Step 2: Heap Allocation
    int *heapVar = (int *)malloc(sizeof(int)); // Allocate memory on the heap

    if (heapVar == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *heapVar = 100; // Store a value in the heap-allocated memory

    // Step 3: Using Memory
    printf("Stack variable: %d\n", stackVar);
    printf("Heap variable: %d\n", *heapVar);

    // Step 4: Deallocate Heap Memory
    free(heapVar); // Release the memory on the heap

    return 0;
}

