//WAP to create ticket booking system.
#include <stdio.h>
#include <string.h>
#define MAX 10

struct Ticket {
    int ticketNo;
    char name[50];
    char destination[30];
    int seats;
};

struct Ticket tickets[MAX];
int n = 0;

void bookTicket() {
    printf("Enter Ticket No: "); scanf("%d", &tickets[n].ticketNo);
    printf("Enter Name: "); scanf(" %[^\n]", tickets[n].name);
    printf("Enter Destination: "); scanf(" %[^\n]", tickets[n].destination);
    printf("Enter Seats: "); scanf("%d", &tickets[n].seats);
    n++;
    printf("Ticket booked!\n");
}

void display() {
    if (n == 0) { printf("No bookings found.\n"); return; }
    printf("\n%-10s %-20s %-20s %-5s\n", "Ticket No", "Name", "Destination", "Seats");
    for (int i = 0; i < n; i++)
        printf("%-10d %-20s %-20s %-5d\n", tickets[i].ticketNo, tickets[i].name,
               tickets[i].destination, tickets[i].seats);
}

void cancelTicket() {
    int tno; printf("Enter Ticket No to cancel: "); scanf("%d", &tno);
    for (int i = 0; i < n; i++) {
        if (tickets[i].ticketNo == tno) {
            for (int j = i; j < n - 1; j++)
                tickets[j] = tickets[j + 1];
            n--;
            printf("Ticket cancelled!\n"); return;
        }
    }
    printf("Ticket not found!\n");
}

void searchTicket() {
    int tno; printf("Enter Ticket No to search: "); scanf("%d", &tno);
    for (int i = 0; i < n; i++) {
        if (tickets[i].ticketNo == tno) {
            printf("Ticket No: %d\nName: %s\nDestination: %s\nSeats: %d\n",
                   tickets[i].ticketNo, tickets[i].name,
                   tickets[i].destination, tickets[i].seats);
            return;
        }
    }
    printf("Ticket not found!\n");
}

int main() {
    int choice;
    do {
        printf("\n1.Book  2.Display  3.Cancel  4.Search  5.Exit\n");
        printf("Choice: "); scanf("%d", &choice);
        if (choice == 1) bookTicket();
        else if (choice == 2) display();
        else if (choice == 3) cancelTicket();
        else if (choice == 4) searchTicket();
    } while (choice != 5);
    return 0;
}