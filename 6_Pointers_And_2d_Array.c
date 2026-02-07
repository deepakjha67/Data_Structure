#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get dimensions from user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols]; // Declaring the 2D array

    // 2. Input elements using pointer arithmetic
    printf("Enter elements for a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Using scanf with pointer notation
            // Equivalent to &matrix[i][j]
            scanf("%d", (*(matrix + i) + j));
        }
    }

    // 3. Display elements using pointer arithmetic
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Dereferencing the pointer to get the value
            // Equivalent to matrix[i][j]
            printf("%d\t", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    return 0;
}
