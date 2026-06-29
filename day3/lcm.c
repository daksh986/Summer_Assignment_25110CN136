#include <stdio.h>
int main(){
    int a , b , lcm =0;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    if( a>b){
        lcm=a;
    }else{
        lcm=b;
    }
    while(a >0){
        if(lcm>=a && lcm >= b){
              if(lcm%a==0 && lcm%b==0){
            break;
        }else{
            lcm++ ;}
        }else if( lcm>a &&lcm<b){
              if(lcm%a==0 && b%lcm==0){
            break;
        }else{
            lcm++ ;}
        }else{
              if(a%lcm==0 && b%lcm==0){
            break;
        }else{
            lcm++ ;}
        }
        
        
            
        
        
      
    }
    printf("%d",lcm) ;
    
    
    
    
    return 0;
}