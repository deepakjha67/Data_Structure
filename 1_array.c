#include<stdio.h>
int main () {
    int size, arr[50],i;
    printf("Enter the size of the array:  ");
    scanf("%d" , &size);
    
    for(i=0; i<size; i++) {
        printf("arr[%d]" , i);
        scanf("%d" , &arr[i]);
    
        }
        
        for(i=0; i<size; i++) {
            printf("%d", arr[i]);
            }     
    return 0;
}
