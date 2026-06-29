//WAP to check palindrome string.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    int flag=0 , length=0;
    while(str[length]!= '\0'){
            length++;
    }
    //convert to lowercase for uniform checking.
    for(int i=0 ; i<length ; i++){
        if (str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;}
    }
    for(int i=0 , j= length-1 ; i< length/2 ; i++ , j--){
        if(str[i]!=str[j])   flag=1;
    }
    if(flag==0) printf("The string is a plaindrome.");
    else    printf("The string is not a plaindrome.");
    return 0;
}