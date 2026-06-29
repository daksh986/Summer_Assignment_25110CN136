#include <stdio.h>

int main()
{
int n, count=0; 
printf("enter the number whose number of digit you want to find :\n");
scanf("%d",&n);
while(n>0){
    n=n/10;
    count++;
}
   

printf("number of digits are = %d", count);


return 0;
}