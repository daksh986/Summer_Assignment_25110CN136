//WAP to finf first repeating character.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    for(int i=0 ; str[i]!= '\0' ; i++){
        int flag=0;
        for(int j=0 ; str[j]!= '\0' ; j++){
            if(i!=j && str[i]==str[j]){
                flag=1;
                break;  
        }
    }
if(flag==1){
printf("The first repeating character is %c.",str[i]);
    return 0;
}
    }
printf("No repeating character found.");
    return 0;
}