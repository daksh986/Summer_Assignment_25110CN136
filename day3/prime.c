#include <stdio.h>

int main()
{
int n, i , prime=0 ;
printf("enter a number : ");
scanf("%d",&n);
if(n==1){
    printf("entered number is prime ");
}
for(i=2;i<=n/2;i++){
    if(n%i==0){
        prime= 1;
        break;
        
    }else{
        continue;
    }
}
if (prime==1){
    printf("the entered number is not prime ");}
    else{
        printf("the entered number is prime");
        }
    



    return 0;
}