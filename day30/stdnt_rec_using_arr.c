#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

int main() {
    char names[MAX_STUDENTS][50];
    int roll_nos[MAX_STUDENTS];
    int count = 0, choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n2. View All\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1 && count < MAX_STUDENTS) {
            printf("Enter Roll Number: ");
            scanf("%d", &roll_nos[count]);
            getchar(); // Consume newline character

            printf("Enter Name: ");
            fgets(names[count], 50, stdin);
            names[count][strcspn(names[count], "\n")] = 0; // Remove trailing newline
            
            printf("Student added successfully!\n");
            count++;
        } 
        else if (choice == 2) {
            printf("\n--- Student List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Roll No: %d | Name: %s\n", roll_nos[i], names[i]);
            }
        }
    } while (choice != 3);

    return 0;
}