//WAP to create salary management system.
#include <stdio.h>
#define MAX 50
struct Employee {
    int id;
    char name[30];
    float salary;
};

struct Employee e[MAX];
int n = 0;

void add() {
    printf("Enter ID, Name, salary: ");
    scanf("%d", &e[n].id);
    getchar();
    scanf("%[^\n]", e[n].name);
    scanf("%f", &e[n].salary);
    n++;
    printf("Record added!\n");
}

void display() {
    if (n == 0) { printf("No records.\n"); return; }
    printf("\n%-5s %-15s %-10s \n", "ID", "Name", "salary");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-5d %-15s %-10.2f \n",
               e[i].id, e[i].name, e[i].salary );
}

void search() {
    int id; printf("Enter ID: "); scanf("%d", &id);
    for (int i = 0; i < n; i++)
        if (e[i].id == id) {
            printf("ID: %d | Name: %s | salary: %.2f\n",
                   e[i].id, e[i].name, e[i].salary);
            return;
        }
    printf("Not found.\n");
}

void delete() {
    int id; printf("Enter ID to delete: "); scanf("%d", &id);
    for (int i = 0; i < n; i++)
        if (e[i].id == id) {
            for (int j = i; j < n - 1; j++) e[j] = e[j + 1];
            n--;
            printf("Deleted!\n");
            return;
        }
    printf("Not found.\n");
}

int main() {
    int ch;
    do {
        printf("\n1.Add  2.Display  3.Search  4.Delete  0.Exit\nChoice: ");
        scanf("%d", &ch);
        if      (ch == 1) add();
        else if (ch == 2) display();
        else if (ch == 3) search();
        else if (ch == 4) delete();
    } while (ch != 0);
    return 0;
}