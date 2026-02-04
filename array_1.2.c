#include <stdio.h>

int main() {
    int arr[50], size, i, pos, element;

    // 1. Initializing the Array
    printf("Enter the number of elements (max 50): ");
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // --- TRAVERSAL ---
    printf("\n--- Current Array (Traversal) ---\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // --- INSERTION ---
    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    // Validation
    if (pos > size + 1 || pos <= 0) {
        printf("Invalid position! Insertion failed.\n");
    } else {
        // Shifting elements to the right to make space
        // We use (pos - 1) because arrays are 0-indexed
        for (i = size - 1; i >= pos - 1; i--) {
            arr[i + 1] = arr[i];
        }

        arr[pos - 1] = element; // Insert the element
        size++;                 // Increase the logical size

        // --- TRAVERSAL AFTER INSERTION ---
        printf("\n--- Array after Insertion ---\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
