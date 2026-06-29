// WAP to Sort words by length.
#include <stdio.h>
#include <string.h>

int main() {
    int totalWords;
    char words[50][100], temp[100];

    
    printf("SORT WORDS BY LENGTH\n");
    

    printf("How many words do you want to enter? ");
    scanf("%d", &totalWords);

    printf("\nEnter %d words (no spaces):\n", totalWords);
    for(int i = 0; i < totalWords; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    // Bubble Sort logic based on string length
    for(int i = 0; i < totalWords - 1; i++) {
        for(int j = 0; j < totalWords - i - 1; j++) {
            
            // Manual length calculation (bypassing strlen)
            int len1 = 0, len2 = 0;
            while(words[j][len1] != '\0') {
                len1++;
            }
            while(words[j+1][len2] != '\0') {
                len2++;
            }

            // Swap if the first word is longer than the second
            if(len1 > len2) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    printf("SORTED WORDS\n");
    
    for(int i = 0; i < totalWords; i++) {
        printf("%s\n", words[i]);
    }
    

    return 0;
}
