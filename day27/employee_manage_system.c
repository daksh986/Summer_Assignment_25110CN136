//WAP to create employee management system.
#include <stdio.h>
#include <string.h>
#define MAX 50
struct Employee {
    int id;
    char name[30];
    char dept[20];
    float salary;
};
struct Employee e[MAX];
int n=0;

void add(){
    printf("Enter ID, Name, Department, Salary: ");
    scanf("%d", &e[n].id);
    getchar();
    scanf("%[^\n]", e[n].name);
    getchar();
    scanf("%[^\n]", e[n].dept);
    scanf("%f", &e[n].salary);
    n++;
    printf("Record added!\n");
}
void display(){
    if (n == 0) { printf("No records.\n"); return; }
    printf("\n%-6s %-20s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-6d %-20s %-15s %-10.2f\n", e[i].id, e[i].name, e[i].dept, e[i].salary);
}

void search(){
    int id; printf("Enter ID to search: "); scanf("%d", &id);
    for (int i = 0; i < n; i++)
        if (e[i].id == id) {
            printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                   e[i].id, e[i].name, e[i].dept, e[i].salary);
            return;
        }
    printf("Not found.\n");
}

void update(){
    int id; printf("Enter ID to update: "); scanf("%d", &id);
    for (int i = 0; i < n; i++)
        if (e[i].id == id) {
            getchar();
            printf("New Name: ");    scanf("%[^\n]", e[i].name); getchar();
            printf("New Dept: ");    scanf("%[^\n]", e[i].dept);
            printf("New Salary: ");  scanf("%f", &e[i].salary);
            printf("Record updated!\n");
            return;
        }
    printf("Not found.\n");
}

void delete(){
    int id; printf("Enter ID to delete: "); scanf("%d", &id);
    for (int i = 0; i < n; i++)
        if (e[i].id == id) {
            for (int j = i; j < n - 1; j++) e[j] = e[j + 1];
            n--;
            printf("Record deleted!\n");
            return;
        }
    printf("Not found.\n");
}

int main() {
    int ch;
    do {
        printf("\n1.Add  2.Display  3.Search  4.Update  5.Delete  0.Exit\nChoice: ");
        scanf("%d", &ch);
        if      (ch == 1) add();
        else if (ch == 2) display();
        else if (ch == 3) search();
        else if (ch == 4) update();
        else if (ch == 5) delete();
    } while (ch != 0);
    return 0;
}