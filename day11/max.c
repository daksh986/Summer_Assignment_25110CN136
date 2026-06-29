#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &m);
    printf("Maximum of %d and %d is: %d", n, m, max(n, m));
}