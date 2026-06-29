#include <stdio.h>
void moveZeroes(int arr[], int size) {
    int count = 0; // Count of non-zero elements
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < size) {
        arr[count++] = 0; // Fill the remaining positions with zeroes
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
    moveZeroes(arr, size);
    printf("Array after moving zeroes to the end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}