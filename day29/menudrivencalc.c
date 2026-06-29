#include <stdio.h>
#include <string.h>
void menucalculator(char operation[], float num1, float num2) {
    if (strcmp(operation, "add") == 0) {
        printf("Result: %.2f\n", num1 + num2);
    } else if (strcmp(operation, "subtract") == 0) {
        printf("Result: %.2f\n", num1 - num2);
    } else if (strcmp(operation, "multiply") == 0) {
        printf("Result: %.2f\n", num1 * num2);
    } else if (strcmp(operation, "divide") == 0) {
        if (num2 != 0) {
            printf("Result: %.2f\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operation. Please choose add, subtract, multiply, or divide.\n");
    }
}
int main() {
    char operation[20];
    float num1, num2;
    
    printf("Enter operation (add, subtract, multiply, divide): ");
    scanf("%s", operation);
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    menucalculator(operation, num1, num2);
    
    return 0;
}