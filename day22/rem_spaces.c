//WAP to remove spaces from string.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int j=0;
for(int i=0 ; str[i]!= '\0' ;i++ ){
    if(str[i]!=' '){
        str[j]=str[i];
        j++;
    }  
}
for(int i=0 ; i<j ; i++){
    printf("%c",str[i]);
}
    return 0;
}