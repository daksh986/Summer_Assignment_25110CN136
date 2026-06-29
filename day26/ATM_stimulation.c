//WAP to create ATM simulation.
#include <stdio.h>
 
int main() {
    int correctPin = 1234 , enteredPin;
    float balance = 10000.00 , amount;
    int choice , attempts = 0 , maxAttempts = 3;
 
    printf("================================\n");
    printf("        ATM SIMULATION\n");
    printf("================================\n\n");

 while(attempts<maxAttempts){
        printf("Enter your PIN:");
        scanf("%d",&enteredPin);
        attempts++;
 
        if(enteredPin == correctPin){
            printf("PIN accepted. Welcome!\n\n");
            break;
        } 
        else{
            printf("Incorrect PIN. %d attempt(s) remaining.\n", maxAttempts-attempts);
        }
        if(attempts == maxAttempts){
            printf("Card blocked. Too many incorrect attempts.\n");
            return 0;
        }
    }
    while (1){
        printf("--------------------------------\n");
        printf("        MAIN MENU\n");
        printf("--------------------------------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("--------------------------------\n");
        printf("Enter your choice(1/2/3/4):");
        scanf("%d",&choice);
        printf("\n");
 
        switch (choice){
            case 1:
                printf("Your current balance: Rs. %.2f\n\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: Rs. ");
                scanf("%f", &amount);
                if(amount <= 0){
                    printf("Invalid amount. Please enter a positive value.\n\n");
                } 
                else{
                    balance += amount;
                    printf("Rs. %.2f deposited successfully.\n", amount);
                    printf("Updated balance: Rs. %.2f\n\n", balance);
                }
                break;
            case 3:
                printf("Enter withdrawal amount: Rs.");
                scanf("%f",&amount);
                if(amount <= 0){
                    printf("Invalid amount. Please enter a positive value.\n\n");
                } 
                else if(amount > balance){
                    printf("Insufficient balance. Available: Rs. %.2f only.\n\n", balance);
                } 
                else {
                    balance -= amount;
                    printf("Rs. %.2f withdrawn successfully.\n", amount);
                    printf("Updated balance: Rs. %.2f\n\n", balance);
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                printf("================================\n");
                return 0;
            default:
                printf("Invalid choice. Please select 1-4.\n\n");
        }
    }
    return 0;
}