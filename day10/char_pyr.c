#include <stdio.h>

int main()
{ int i, j,k,l;
for(i = 'A' ; i <= 'E'; i ++){
    for(j='D';j>=i;j--)
        printf(" ");
    for(k='A';k<i;k++)
        printf("%c",k);
    for(l=i;l>='A';l--)
        printf("%c",l);
    
    printf("\n");
    }
    
    


    return 0;
}