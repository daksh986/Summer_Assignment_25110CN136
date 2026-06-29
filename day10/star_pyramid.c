#include <stdio.h>

int main()
{ int i, j,k,l;
for(i = 1 ; i <= 5; i ++){
    for(j=4;j>=i;j--)
        printf(" ");
    for(k=0;k<2*i-1;k++)
        printf("*");
    for(l=4;l>=0;l--)
        printf(" ");
    
    printf("\n");
    }
    
    


    return 0;
}