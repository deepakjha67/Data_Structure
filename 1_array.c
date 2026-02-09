#include <stdio.h>

int main() {
    int arr[50], size, i;
    printf("Enter thr size of the array: ");
    scanf("%d" , &size);
    
    printf("Enter the %d elements of array: \n" , size);
    for(i=0; i<size; i++) {
        scanf("%d" , &arr[i]);
        }
    
      
        printf("\nElements of the array are: \n");
        for(i=0; i<size; i++) {
            printf("%d", arr[i]);
            }
        
        return 0;
    }
