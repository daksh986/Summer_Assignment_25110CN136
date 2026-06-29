//WAP to union of arrays.
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
int k=m+n;int crr[k];
for(int i=0 ; i<m ; i++){
    crr[i]=arr[i];
}
int l=0;
for(int i=m ; i<k ; i++){
    int dupli=0;
    for(int j=0 ; j<m ; j++){
        if(brr[l]==arr[j]){
            dupli=1;
            break;
    }}
    if(!dupli){
    crr[i]=brr[l];
    l++;
}}
k=m+l;
printf("{");
for(int i=0 ; i<k-1 ; i++){
    printf("%d,",crr[i]);
}
printf("%d}",crr[k-1]);
return 0;
}