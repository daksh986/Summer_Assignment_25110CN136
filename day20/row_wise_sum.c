//WAP to find row wise sum.
#include<stdio.h>
int main(){
int m,n;
printf("Enter number of rows and columns:");
scanf("%d %d",&m,&n);
int arr[m][n];

printf("Enter matrix elements:");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
printf("Row wise sum:\n");
for(int i=0 ; i<m ; i++){
    int sum=0;
    for(int j=0 ; j<n ; j++){
        sum=sum+arr[i][j];
        }
printf("Sum of row %d = %d\n",i+1,sum);
    }
return 0;
}