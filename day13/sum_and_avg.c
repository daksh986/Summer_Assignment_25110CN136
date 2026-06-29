#include <stdio.h>
void sum_avg(int arr[], int size, int *sum, float *avg) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }
    *avg = (float)(*sum) / size;
}
int main() {
    int arr[100], size, sum;
    float avg;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    sum_avg(arr, size, &sum, &avg);
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    
    return 0;
}