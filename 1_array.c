#include<stdio.h>
int main() {
    int arr[50], i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for(i=0; i<size; i++) {
        printf("A[%d]", i);
        scanf("%d" , &arr[i]);

    }

    printf("The elements of the array are: ");
    for (i=0; i<size; i++) {
        printf("%d" , arr[i]);
    }
    return 0;

}
