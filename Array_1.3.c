#include <stdio.h>

int main() {
    int arr[100], n, position, i;

    // 1. Initializing the array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Taking input for deletion
    printf("Enter the location (1 to %d) where you want to delete: ", n);
    scanf("%d", &position);

    // 3. Validation and Deletion Logic
    if (position < 1 || position > n) {
        printf("Deletion not possible. Invalid position.\n");
    } else {
        // Shifting elements to the left
        // We use position - 1 because arrays are 0-indexed
        for (i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("Element deleted successfully.\n");
        n--; // Reduce the logical size of the array

        // 4. Printing the updated array
        printf("Resultant array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
