//WAP to create bank account system.
#include <stdio.h>
#include <string.h>
#define MAX 10

struct Account {
    int accNo;
    char name[50];
    float balance;
};

struct Account bank[MAX];
int n = 0;

void createAccount() {
    printf("Enter Account No: "); scanf("%d", &bank[n].accNo);
    printf("Enter Name: "); scanf(" %[^\n]", bank[n].name);
    printf("Enter Initial Balance: "); scanf("%f", &bank[n].balance);
    n++;
    printf("Account created!\n");
}

void display() {
    if (n == 0) { printf("No accounts found.\n"); return; }
    printf("\n%-10s %-20s %-10s\n", "Acc No", "Name", "Balance");
    for (int i = 0; i < n; i++)
        printf("%-10d %-20s %-10.2f\n", bank[i].accNo, bank[i].name, bank[i].balance);
}

void deposit() {
    int acc; float amt;
    printf("Enter Account No: "); scanf("%d", &acc);
    for (int i = 0; i < n; i++) {
        if (bank[i].accNo == acc) {
            printf("Enter amount to deposit: "); scanf("%f", &amt);
            bank[i].balance += amt;
            printf("New Balance: %.2f\n", bank[i].balance); return;
        }
    }
    printf("Account not found!\n");
}

void withdraw() {
    int acc; float amt;
    printf("Enter Account No: "); scanf("%d", &acc);
    for (int i = 0; i < n; i++) {
        if (bank[i].accNo == acc) {
            printf("Enter amount to withdraw: "); scanf("%f", &amt);
            if (amt > bank[i].balance) { printf("Insufficient balance!\n"); return; }
            bank[i].balance -= amt;
            printf("New Balance: %.2f\n", bank[i].balance); return;
        }
    }
    printf("Account not found!\n");
}

int main() {
    int choice;
    do {
        printf("\n1.Create  2.Display  3.Deposit  4.Withdraw  5.Exit\n");
        printf("Choice: "); scanf("%d", &choice);
        if (choice == 1) createAccount();
        else if (choice == 2) display();
        else if (choice == 3) deposit();
        else if (choice == 4) withdraw();
    } while (choice != 5);
    return 0;
}