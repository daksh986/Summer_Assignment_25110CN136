#include <stdio.h>
int palindrome(int n){
    int original = n;
    int reversed = 0;
    while(n > 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return (reversed == original);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(palindrome(n)){
        printf("%d is a palindrome number.", n);
    }
    else{
        printf("%d is not a palindrome number.", n);
    }
}