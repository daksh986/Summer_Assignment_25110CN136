//WAP to find first non repeating character.
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
if(flag==0){
printf("The first non repeating character is %c.",str[i]);
    return 0;
}
    }
printf("No non repeating character found.");
    return 0;
}