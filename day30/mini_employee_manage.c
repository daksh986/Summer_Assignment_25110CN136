#include <stdio.h>
#include <string.h>

#define MAX_EMP 50

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emps[MAX_EMP];
    int count = 0, choice;

    do {
        printf("\n--- Employee Management ---\n");
        printf("1. Add Employee\n2. View Employees\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1 && count < MAX_EMP) {
            printf("Enter Employee ID: ");
            scanf("%d", &emps[count].id);
            getchar();

            printf("Enter Name: ");
            fgets(emps[count].name, 50, stdin);
            emps[count].name[strcspn(emps[count].name, "\n")] = 0;

            printf("Enter Salary: ");
            scanf("%f", &emps[count].salary);
            
            count++;
        } 
        else if (choice == 2) {
            printf("\n--- Employee List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Salary: %.2f\n", 
                       emps[i].id, emps[i].name, emps[i].salary);
            }
        }
    } while (choice != 3);

    return 0;
}