//WAP to create student record management system.
#include <stdio.h>
#include <string.h>
#define MAX 50

struct Student{
    int roll;
    char name[30];
    float marks;
};
struct Student s[MAX];
int n=0;

void add(){
    printf("Enter Roll no., Name, Marks:");
    scanf("%d",&s[n].roll);
    getchar();
    scanf("%[^\n]",s[n].name);
    scanf("%f",&s[n].marks);
    n++;
    printf("Record added!\n");
}

void display(){
    if (n==0) { printf("No records.\n"); return; }
    printf("\n%-6s %-20s %-6s\n", "Roll no.", "Name", "Marks");
    printf("--------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-6d %-20s %-6.2f\n", s[i].roll, s[i].name, s[i].marks);
}

void search(){
    int r; printf("Enter roll no. to search: "); scanf("%d", &r);
    for (int i = 0; i < n; i++)
        if (s[i].roll == r) {
            printf("Roll no.: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            return;
        }
    printf("Not found.\n");
}
void delete(){
    int r; printf("Enter roll no. to delete: "); scanf("%d", &r);
    for (int i = 0; i < n; i++)
        if (s[i].roll == r) {
            for (int j = i; j < n - 1; j++) s[j] = s[j + 1];
            n--;
            printf("Record deleted!\n");
            return;
        }
    printf("Not found.\n");
}
int main() {
    int ch;
    do{
        printf("\n1.Add  2.Display  3.Search  4.Delete  0.Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch == 1) add();
        else if (ch == 2) display();
        else if (ch == 3) search();
        else if (ch == 4) delete();
    } while (ch != 0);
    return 0;
}