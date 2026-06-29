#include <stdio.h>


int reverseHelper(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    return reverseHelper(num / 10, (reversed * 10) + (num % 10));
}

int reverse(int num) {
    
    if (num < 0) {
        return -reverseHelper(-num, 0);
    }
    return reverseHelper(num, 0);
}

int main() {
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse: %d\n", reverse(num));
    return 0;
}   