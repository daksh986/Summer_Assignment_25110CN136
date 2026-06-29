#include <stdio.h>

int main()
{
int n, rev=0, lev, original_n; 
printf("enter the number :");
scanf("%d",&n);
original_n = n;

while(n>0){
    lev=n%10;
    rev=rev*10+lev;
    n=n/10;
   
} 
if(original_n==rev){
    printf("the number is palindrome");}
    else{

printf("the number is not palindrome");}
    



    return 0;
}