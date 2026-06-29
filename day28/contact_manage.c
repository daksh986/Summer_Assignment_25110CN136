//WAP to create contact management system.
#include <stdio.h>
#include <string.h>
#define MAX 10

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contacts[MAX];
int n = 0;

void addContact() {
    printf("Enter Name: "); scanf(" %[^\n]", contacts[n].name);
    printf("Enter Phone: "); scanf(" %[^\n]", contacts[n].phone);
    printf("Enter Email: "); scanf(" %[^\n]", contacts[n].email);
    n++;
    printf("Contact added!\n");
}

void display() {
    if (n == 0) { printf("No contacts found.\n"); return; }
    printf("\n%-20s %-15s %-25s\n", "Name", "Phone", "Email");
    for (int i = 0; i < n; i++)
        printf("%-20s %-15s %-25s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
}

void searchContact() {
    char name[50]; printf("Enter Name to search: "); scanf(" %[^\n]", name);
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Name: %s\nPhone: %s\nEmail: %s\n",
                   contacts[i].name, contacts[i].phone, contacts[i].email);
            return;
        }
    }
    printf("Contact not found!\n");
}

void deleteContact() {
    char name[50]; printf("Enter Name to delete: "); scanf(" %[^\n]", name);
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j = i; j < n - 1; j++)
                contacts[j] = contacts[j + 1];
            n--;
            printf("Contact deleted!\n"); return;
        }
    }
    printf("Contact not found!\n");
}

int main() {
    int choice;
    do {
        printf("\n1.Add  2.Display  3.Search  4.Delete  5.Exit\n");
        printf("Choice: "); scanf("%d", &choice);
        if (choice == 1) addContact();
        else if (choice == 2) display();
        else if (choice == 3) searchContact();
        else if (choice == 4) deleteContact();
    } while (choice != 5);
    return 0;
}