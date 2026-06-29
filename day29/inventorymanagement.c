#include <stdio.h>
#include <string.h>
void inventorymanagement(char itemName[], int itemCode, float price, int quantity) {
    printf("Item Name: %s\n", itemName);
    printf("Item Code: %d\n", itemCode);
    printf("Item Price: %.2f\n", price);
    printf("Item Quantity: %d\n", quantity);
}
int main() {
    char itemName[100];
    int itemCode;
    float price;
    int quantity;
    
    printf("Enter item name: ");
    fgets(itemName, sizeof(itemName), stdin);
    itemName[strcspn(itemName, "\n")] = '\0';
    
    printf("Enter item code: ");
    scanf("%d", &itemCode);
    
    printf("Enter item price: ");
    scanf("%f", &price);
    
    printf("Enter item quantity: ");
    scanf("%d", &quantity);
    
    inventorymanagement(itemName, itemCode, price, quantity);
    
    return 0;
}