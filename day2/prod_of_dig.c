#include <stdio.h>

int main()
{
int n , product=1 , lev; 
printf("enter the number whose product of digits you want to find :");
scanf("%d",&n);
while(n>0){
   lev=n%10;
   product=product*lev;
   
    n=n/10;
   
}
   

printf("product  of digits is = %d",product);

    return 0;
}