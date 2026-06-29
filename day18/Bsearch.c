//  WAP to binary search.
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
int temp=0;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }}}
        int tar;
    printf("Enter the target:");
    scanf("%d",&tar);
int low=0, high=n-1, mid;
    int found=-1;
    while(low<= high){
        mid=(low+high)/2;
        if(arr[mid]==tar){
            found=mid;
            break;
        }
        else if(arr[mid]<tar)   low=mid+1;
        else if(arr[mid]>tar)   high=mid-1;      
    }
    if(found!= -1)
    printf("%d found at index %d in the sorted array.",tar,found);
    else    printf("%d not found in the array.",tar);   
    return 0;
    }