//WAP to multiply matrices.
#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter rows and columns of first matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns of second matrix:");
    scanf("%d %d",&p,&q);

    if(n!=p){
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
int arr[m][n], brr[p][q],crr[m][q];

printf("Enter first matrix elements:");
for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("Enter second matrix elements:");
for(int i=0 ; i<p ; i++){
    for(int j=0 ; j<q ; j++){
        scanf("%d",&brr[i][j]);
    }
}
for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<q ; j++){
        crr[i][j]=0;
        for(int k=0 ; k<n ; k++){
    crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
        }
    }
}
printf("Product of both matrices:\n");
for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<q ; j++){
        printf("%d ",crr[i][j]);
    }
printf("\n");
}
return 0;
}