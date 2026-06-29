#include <stdio.h> 
void secondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = -1; // Initialize to -1 to handle cases where there is no second largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest number: %d\n", secondLargest);
    }
}
int main() {
    int arr[100], size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    secondLargest(arr, size);
    
    return 0;
}