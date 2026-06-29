//WAP to intersection of arrays.
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
    int k=m+n;
int l=0;int crr[k];int count=0;
for(int i=0 ; i<m ; i++){
    l=0;
    for(int j=0 ; j<n ; j++){
        if(brr[j]==arr[i]){
            l=1;
            break;
    }}
    if(l){
    crr[count]=arr[i];
    count++;
}}
k=count;
printf("{");
for(int i=0 ; i<k-1 ; i++){
    printf("%d,",crr[i]);
}
printf("%d}",crr[k-1]);
return 0;
}