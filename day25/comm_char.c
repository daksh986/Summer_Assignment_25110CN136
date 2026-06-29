// WAP to Find common characters in strings.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int found = 0;

    
    printf("    FIND COMMON CHARACTERS\n");
    

    // The [^\n] tells scanf to read spaces until the user hits Enter
    printf("Enter first string: ");
    scanf(" %[^\n]s", str1); 

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    // Map characters of first string using ASCII values as indexes
    for(int i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]] = 1; 
    }

    // Map characters of second string
    for(int i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]] = 1;
    }

    
    printf("       COMMON CHARACTERS\n");
    
    
    for(int i = 0; i < 256; i++) {
        // Exclude the space character (ASCII 32) from the results
        if(i != 32 && count1[i] == 1 && count2[i] == 1) {
            printf("%c ", i);
            found = 1;
        }
    }
    
    if(found == 0) {
        printf("No common characters found.");
    }
   

    return 0;
}
