// WAP to Compress a string.
#include <stdio.h>

int main() {
    char s[100];
    int count = 1;

    
    printf("       STRING COMPRESSION\n");
    

    printf("Enter a string: ");
    scanf(" %[^\n]", s); // Added the magic space for buffer safety

    printf("\n--- Compressed Result ---\n");
    
    // Optimized Loop: Stops when it hits the null terminator, achieving O(n) time
    for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == s[i+1]) {
            count++;
        } 
        else {
            // Only print the count if it is greater than 1
            if (count > 1) {
                printf("%c%d", s[i], count);
            } else {
                printf("%c", s[i]); 
            }
            count = 1; // Reset count for the next character
        }
    }
    
    

    return 0;
}
