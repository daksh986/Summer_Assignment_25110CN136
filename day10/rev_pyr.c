#include <stdio.h>

int main()
{ int i, j,k,l;
for(i = 5 ; i >= 0; i --){
    for(j=0;j<5-i;j++)
        printf(" ");
            
    for(k=2*i-1;k>0;k--)
        printf("*");
    
    
    printf("\n");
    }
    
    


    return 0;
}