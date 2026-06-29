//WAP to remove duplicates from array.
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
    int k=0;
    for(int i=0 ; i<n ; i++){
        int dupli=0;
        for(int j=0; j<k ; j++){
            if(arr[i]==arr[j]){
                dupli=1;
                break;
        }
    }
    if(!dupli){
        arr[k]=arr[i];
        k++;
    }
}
printf("Array after removing duplicates:{");
for(int i=0 ; i<k-1 ; i++){
    printf("%d ",arr[i]);
}
printf("%d}",arr[k-1]);
    return 0;
}