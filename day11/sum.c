#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(){
    
    int n,  m ;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &m);
    printf("Sum of %d and %d is: %d", n, m, sum(n, m));
  
}