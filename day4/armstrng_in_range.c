#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int n = 0;
    int temp = num;

    
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    
    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, n));
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}  