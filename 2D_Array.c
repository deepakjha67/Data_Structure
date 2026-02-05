#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // 1. Get dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the 2D array with user-defined sizes
    int matrix[rows][cols];

    // 2. Input: Taking elements from the user
    printf("\nEnter elements for a %dx%d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Output: Displaying the 2D array
    printf("\nThe resulting 2D Array (Matrix) is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
