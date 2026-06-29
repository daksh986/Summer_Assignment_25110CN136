//WAP to find maximum frequency element.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array.");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
int maxf=0, maxElem=0;
    for(int i=0 ; i<n ; i++){
        int freq=1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j])  freq++;
        if(freq>maxf){
            maxf=freq;
            maxElem=arr[i];
        }}}

printf("the max frequency element is %d with frequency %d.",maxElem,maxf );
    return 0;
}