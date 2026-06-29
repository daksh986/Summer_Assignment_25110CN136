#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100];

    printf("\n--- String Operations Menu ---\n");
    printf("1. Find Length of a string (strlen)\n");
    printf("2. Copy string (strcpy)\n");
    printf("3. Concatenate strings (strcat)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length: %lu\n", strlen(str1));
            break;
        case 2:
            printf("Enter the source string: ");
            scanf("%s", str1);
            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;
        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}