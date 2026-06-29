#include <stdio.h> 
int rotateRight(int arr[], int size, int k) {
    k = k % size; // Handle cases where k is greater than size
    int temp[k];
    
    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }
    
    // Shift the remaining elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int arr[100], size, k;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);
    rotateRight(arr, size, k);
    printf("Array after rotating right by %d positions: ", k);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}