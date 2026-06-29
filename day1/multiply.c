#include <stdio.h>

int main()
{
int n, i, multiplier; 
printf("enter the number whose table you want to find :");
scanf("%d",&n);
for(i=1;i<=10;i++){
    multiplier = n*i;
    printf("%d x %d = %d\n", n ,i, multiplier);
}


return 0;
} 