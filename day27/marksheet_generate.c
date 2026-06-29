//WAP to create marksheet generation system.
#include <stdio.h>
#define MAX 50

struct Student {
    int roll, m1, m2, m3, total;
    char name[30];
    float avg;
    char grade;
};

struct Student s[MAX];
int n = 0;

void add() {
    printf("Roll Name M1 M2 M3: ");
    scanf("%d %s %d %d %d", &s[n].roll, s[n].name, &s[n].m1, &s[n].m2, &s[n].m3);
    s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
    s[n].avg   = s[n].total / 3.0;
    s[n].grade = s[n].avg >= 75 ? 'A' : s[n].avg >= 50 ? 'B' : s[n].avg >= 35 ? 'C' : 'F';
    n++;
    printf("Added!\n");
}

void display() {
    printf("\n%-5s %-15s %-6s %-6s %-5s\n", "Roll", "Name", "Total", "Avg", "Grade");
    for (int i = 0; i < n; i++)
        printf("%-5d %-15s %-6d %-6.2f %-5c\n", s[i].roll, s[i].name, s[i].total, s[i].avg, s[i].grade);
}

int main() {
    int ch;
    do {
        printf("\n1.Add  2.Display  0.Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch == 1) add();
        else if (ch == 2) display();
    } while (ch != 0);
}