#include <stdio.h>

int main() {
    int i, n, arr[20], sum = 0;
    float mean = 0.0;
  
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
  
    for (i = 0; i < n; i++) {
        printf("\narr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
  
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
  
    mean = (float)sum / n;
  
    printf("\nThe sum of the array elements %d", sum);
    printf("\nThe mean of the array elements %.2f", mean);
    return 0;
}

//  OUTPUT : 

//  Enter the number of elements in the array: 5
//  arr[0] = 1
//  arr[1] = 2
//  arr[2] = 3
//  arr[3] = 4
//  arr[4] = 5
//  The sum of the array elements = 15
//  The mean of the array elements = 3.00
