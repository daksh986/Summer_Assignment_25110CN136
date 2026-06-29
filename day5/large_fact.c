#include <stdio.h>
#include <math.h>

long long maxPrimeFactors(long long n) {
    long long maxPrime = -1;

    
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long n;
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Largest prime factor: %lld\n", maxPrimeFactors(n));
    return 0;
}   