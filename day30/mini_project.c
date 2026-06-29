#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

// Global Arrays & Variables
char itemNames[MAX_ITEMS][50];
int itemQuantities[MAX_ITEMS];
int itemCount = 0;

// Function Declarations
void addItem();
void viewItems();
void searchItem();

int main() {
    int choice;
    do {
        printf("\n=== Mini Project: Store Inventory ===\n");
        printf("1. Add New Item\n2. View All Items\n3. Search Item\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1: addItem(); break;
            case 2: viewItems(); break;
            case 3: searchItem(); break;
            case 4: printf("Exiting system...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to add an item
void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("Inventory is full!\n");
        return;
    }
    printf("Enter Item Name: ");
    fgets(itemNames[itemCount], 50, stdin);
    itemNames[itemCount][strcspn(itemNames[itemCount], "\n")] = 0;

    printf("Enter Quantity: ");
    scanf("%d", &itemQuantities[itemCount]);
    
    printf("Item added successfully!\n");
    itemCount++;
}

// Function to display all items
void viewItems() {
    if (itemCount == 0) {
        printf("Inventory is empty.\n");
        return;
    }
    printf("\n--- Current Inventory ---\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - Qty: %d\n", i + 1, itemNames[i], itemQuantities[i]);
    }
}

// Function to search using string matching
void searchItem() {
    char searchName[50];
    int found = 0;
    
    printf("Enter item name to search: ");
    fgets(searchName, 50, stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    for (int i = 0; i < itemCount; i++) {
        if (strcasecmp(itemNames[i], searchName) == 0) { // Case-insensitive compare
            printf("Found: %s | Quantity in stock: %d\n", itemNames[i], itemQuantities[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Item not found in inventory.\n");
    }
}