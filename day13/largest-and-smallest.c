#include<stdio.h>
void largestAndSmallest(int arr[], int size) {  
    
    int largest = arr[0];
    int smallest = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
}
int main() {
    int arr[100], size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    largestAndSmallest(arr, size);
    
    return 0;
}