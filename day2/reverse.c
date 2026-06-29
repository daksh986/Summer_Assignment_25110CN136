#include <stdio.h>

int main()
{
int n , rev=0 , lev; 
printf("enter the number whose reverse of digit you want to find :");
scanf("%d",&n);
while(n>0){
   lev=n%10;
   rev=rev*10+lev;
   
    n=n/10;
   
}
   

printf("reversed number = %d",rev);

    return 0;
}