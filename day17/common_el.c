//WAP to find common elements.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter size of Ist array.");
    scanf("%d",&m);
    int arr[m];
    printf("Enter the array elements:");
for(int i=0 ; i<m ; i++){
        scanf("%d",&arr[i]);}
    printf("Enter size of 2nd array.");
    scanf("%d",&n);
    int brr[n];
    printf("Enter the array elements:");
for(int i=0 ; i<n ; i++){
        scanf("%d",&brr[i]);
    }
for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
        if(brr[j]==arr[i]){
            printf("%d ",arr[i]);
        }
    }
}
return 0;
}