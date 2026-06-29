#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[50];
};

int main() {
    struct Book library[MAX_BOOKS];
    int count = 0, choice;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n2. View Books\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1 && count < MAX_BOOKS) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            getchar();

            printf("Enter Title: ");
            fgets(library[count].title, 100, stdin);
            library[count].title[strcspn(library[count].title, "\n")] = 0;

            printf("Enter Author: ");
            fgets(library[count].author, 50, stdin);
            library[count].author[strcspn(library[count].author, "\n")] = 0;
            
            count++;
        } 
        else if (choice == 2) {
            printf("\n--- Available Books ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d | Title: %s | Author: %s\n", 
                       library[i].id, library[i].title, library[i].author);
            }
        }
    } while (choice != 3);

    return 0;
}