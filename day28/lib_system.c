//WAP to create Library management system.
#include <stdio.h>
#include <string.h>

#define MAX 10

struct Book {
    int id;
    char title[50];
    char author[30];
    int available; // 1->available, 0->issued
};

struct Book lib[MAX];
int n = 0;

void addBook(){
    printf("Enter ID:"); scanf("%d", &lib[n].id);
    printf("Enter Title:"); scanf(" %[^\n]", lib[n].title);
    printf("Enter Author:"); scanf(" %[^\n]", lib[n].author);
    lib[n].available = 1;
    n++;
    printf("Book added!\n");
}

void displayBooks(){
    if (n == 0) { printf("No books found.\n"); return; }
    printf("\n%-5s %-25s %-20s %-10s\n", "ID", "Title", "Author", "Status");
    for (int i=0; i<n; i++)
        printf("%-5d %-25s %-20s %-10s\n", lib[i].id, lib[i].title, lib[i].author,
               lib[i].available ? "Available" : "Issued");
}

void issueBook(){
    int id; printf("Enter Book ID to issue:"); scanf("%d",&id);
    for (int i=0; i<n; i++) {
        if (lib[i].id == id) {
            if (!lib[i].available) { printf("Already issued!\n"); return; }
            lib[i].available = 0;
            printf("Book issued successfully!\n"); return;
        }
    }
    printf("Book not found!\n");
}
void returnBook(){
    int id; printf("Enter Book ID to return: "); scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (lib[i].id == id) {
            lib[i].available = 1;
            printf("Book returned successfully!\n"); return;
        }
    }
    printf("Book not found!\n");
}
int main(){
    int choice;
    do {
        printf("\n1.Add  2.Display  3.Issue  4.Return  5.Exit\n");
        printf("Choice: "); scanf("%d", &choice);
        if (choice == 1) addBook();
        else if (choice == 2) displayBooks();
        else if (choice == 3) issueBook();
        else if (choice == 4) returnBook();
    } while (choice != 5);
    return 0;
}