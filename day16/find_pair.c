//WAP to find pair with given sum.
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
int tarsum;
    printf("Enter the target sum:");
    scanf("%d",&tarsum);
    int ind1=0;int ind2=0;
    int found=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==tarsum){
                ind1=i;
                ind2=j;
                found=1;
                break;      }
     }
    if(found)   break;      }
if(!found)  printf("No pair found.");
else        printf("the element at index %d and %d sum to the target %d..",ind1,ind2,tarsum);
    return 0;
}