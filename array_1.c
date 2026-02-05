#include <stdio.h>

int main() {
    int n, i;

    // 1. Ask for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 2. Declaration
    // We define the array type (int) and size [n]
    int numbers[n]; 

    // 3. Taking input from the user (Initialisation via loop)
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 4. Displaying the array elements
    printf("\nThe array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
