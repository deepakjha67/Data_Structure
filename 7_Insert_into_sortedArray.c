#include <stdio.h>

int main() {
    // 1. Initialize a sorted array with some extra capacity
    // We use size 100, but currently only fill 5 spots
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5; // Current number of elements
    int element, i;

    // Print original array
    printf("Original Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2. Input the value to insert
    printf("Enter the number to insert: ");
    scanf("%d", &element);

    // 3. The Insertion Logic
    // Start from the last element (n-1)
    // Keep moving left as long as we are inside the array (i >= 0)
    // AND the current number is BIGGER than the one we want to insert
    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift element to the right
    }

    // 4. Place the new element
    // The loop stops when arr[i] is smaller than element, 
    // so the empty spot is at i + 1.
    arr[i + 1] = element;
    
    // Increase the size of the array
    n++;

    // 5. Print the updated array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    return 0;
}
