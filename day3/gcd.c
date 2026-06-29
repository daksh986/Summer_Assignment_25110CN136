#include <stdio.h>
int main(){
    int a , b, mini,i,gcd=0;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    if(a<b){
        mini=b;
    }else{
        mini=a;
    }
    for(i=1;i<=mini;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }else{
            continue;
        
        }
    }
    printf("the gcd is %d",gcd);
    
    
    
    
    return 0;
}