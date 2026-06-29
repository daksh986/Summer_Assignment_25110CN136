#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n ; 
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Set bits: %d\n", countSetBits(n));
    return 0;
}  