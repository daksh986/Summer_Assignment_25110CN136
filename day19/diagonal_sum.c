//WAP to find diagonal sum.
#include<stdio.h>
int main(){
    int m;
    printf("Enter number of rows or columns:");
    scanf("%d",&m);
    int arr[m][m], sum=0;
    printf("Enter array elements:");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0 ; i<m ; i++){
       sum=sum+ arr[i][i];
    }
    printf("The sum of diagonal of array is %d",sum);
return 0;
}