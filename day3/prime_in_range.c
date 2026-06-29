#include <stdio.h>

int checkPrime(int num)
{
    
    if(num < 2){
        return 0;
    }
    else{   
    
        int x = num/2;
        for(int i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
   
    return 1;
}

int main()
{
    int a, b;
    printf("enter a  lower range:");
    scanf("%d",&a);
    
    printf("enter a  upper range:");
    scanf("%d",&b);
  
    
    for(int i=a; i <= b; i++){
        if(checkPrime(i))
            printf("%d ",i);
    }
 
    return 0;


    return 0;
}