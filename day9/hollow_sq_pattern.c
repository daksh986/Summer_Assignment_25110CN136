#include <stdio.h>

int main()
{ int i, j;
for(i = 1 ; i <= 5; i ++){
    if(i==1 || i==5){
        printf("*****\n");
    }else{
        printf("*   *\n");
    }
}

    return 0;
}