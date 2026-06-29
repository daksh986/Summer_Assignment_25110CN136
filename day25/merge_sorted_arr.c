// WAP to Merge two sorted arrays.
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2;
    int i = 0, j = 0, k = 0;

    
    printf("    MERGE TWO SORTED ARRAYS\n");
    
    // Array 1 Input
    printf("Enter size of 1st sorted array: ");
    scanf("%d", &size1);
    printf("Enter %d sorted elements:\n", size1);
    for(int x = 0; x < size1; x++) {
        printf("Element %d: ", x + 1);
        scanf("%d", &arr1[x]);
    }

    // Array 2 Input
    printf("\nEnter size of 2nd sorted array: ");
    scanf("%d", &size2);
    printf("Enter %d sorted elements:\n", size2);
    for(int x = 0; x < size2; x++) {
        printf("Element %d: ", x + 1);
        scanf("%d", &arr2[x]);
    }

    // Core Merging Logic
    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Sweep up any remaining elements in arr1
    while(i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Sweep up any remaining elements in arr2
    while(j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    
    printf("          MERGED ARRAY\n");
    
    for(int x = 0; x < k; x++) {
        printf("%d ", merged[x]);
    }
    

    return 0;
}
