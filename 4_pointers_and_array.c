#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // Array with a max capacity of 100
    int *ptr;     // Pointer declaration

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 1. Taking input into the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Pointing our GPS to the start of the array
    ptr = arr; 

    // 3. Printing using Pointer Arithmetic
    printf("\nDisplaying elements using a pointer:\n");
    for(i = 0; i < n; i++) {
        // *(ptr + i) looks at the value at the 'next' memory address
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
