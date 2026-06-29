//WAP to check symmetric.
#include<stdio.h>
int main(){
int n;
printf("Enter number of rows and columns:");
scanf("%d",&n);
int arr[n][n],flag=1;

printf("Enter matrix elements:");
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        scanf("%d",&arr[i][j]);
        }
    }

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        if(arr[i][j]!=arr[j][i]){
flag=0;
        }
    }
}
if(flag==1)    printf("The matrix is symmetric.");
else    printf("The matrix is not symmetric.");
return 0;
}