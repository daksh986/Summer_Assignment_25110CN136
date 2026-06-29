#include <stdio.h>
#include <string.h>
void MenuDriverArray(char operation[], int arr[], int n) {
    if (strcmp(operation, "sum") == 0) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        printf("Sum of array elements: %d\n", sum);
    } else if (strcmp(operation, "average") == 0) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        float average = (float)sum / n;
        printf("Average of array elements: %.2f\n", average);
    } else if (strcmp(operation, "max") == 0) {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        printf("Maximum element in the array: %d\n", max);
    } else if (strcmp(operation, "min") == 0) {
        int min = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        printf("Minimum element in the array: %d\n", min);
    } else {
        printf("Error: Invalid operation. Please choose sum, average, max, or min.\n");
    }
}
int main() {
    char operation[20];
    int n;
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[100];
    
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter operation (sum, average, max, min): ");
    scanf("%s", operation);
    
    MenuDriverArray(operation, arr, n);
    
    return 0;
}