#include <stdio.h>

int main()
{
int n , sum=0 , lev; 
printf("enter the number whose sum of digit you want to find :");
scanf("%d",&n);
while(n>0){
   lev=n%10;
   sum=sum+lev;
   
    n=n/10;
   
}
   

printf("the sum of digits is = %d",sum);

    return 0;
}