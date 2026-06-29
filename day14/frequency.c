#include <stdio.h>
void frequency(int arr[], int size) {
    int freq[100] = {0};
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    printf("Element\tFrequency\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d\t%d\n", i, freq[i]);
        }
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
    frequency(arr, size);
    return 0;
}