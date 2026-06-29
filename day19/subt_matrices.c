//WAP to subtract matrices.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows and columns:");
    scanf("%d %d",&m,&n);
    int arr[m][n], brr[m][n], crr[m][n];
    printf("Enter first matrix elements:");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second matrix elements:");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("difference of both matrices.\n");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            crr[i][j]=arr[i][j]-brr[i][j];
            printf("%d ",crr[i][j]);
        }

        printf("\n");
    }
    return 0;
}