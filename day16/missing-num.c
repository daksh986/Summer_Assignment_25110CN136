//WAP to find missing number in array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array.");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter the array elements:");
for(int i=0 ; i<n-1 ; i++){
        scanf("%d",&arr[i]);
    }
int Sum= n*(n+1)/2;
int sum=0;
for(int i=0 ; i<n-1 ; i++){
    sum= sum + arr[i];
}
printf("The missing number is %d.",Sum-sum);
return 0;
}