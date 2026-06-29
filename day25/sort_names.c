// WAP to Sort names alphabetically.
#include <stdio.h>
#include <string.h>

int main() {
    int totalNames;
    char names[50][100], temp[100];

    
    printf("   SORT NAMES ALPHABETICALLY\n");
    

    printf("How many names do you want to enter? ");
    scanf("%d", &totalNames);

    printf("\nEnter %d names:\n", totalNames);
    for(int i = 0; i < totalNames; i++) {
        printf("Name %d: ", i + 1);
        scanf(" %[^\n]s", names[i]);
    }

    // Bubble Sort with strcmp (String Compare)
    for(int i = 0; i < totalNames - 1; i++) {
        for(int j = 0; j < totalNames - i - 1; j++) {
            // If name[j] is alphabetically greater than name[j+1], swap them
            if(strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    
    printf("          SORTED LIST\n");
    
    for(int i = 0; i < totalNames; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
    

    return 0;
}
