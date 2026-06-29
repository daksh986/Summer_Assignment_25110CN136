//  WAP to character frequency.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    char target;
    printf("Enter the target character:");
    scanf(" %c",&target);
    int freq=0;
    for(int i=0 ; str[i]!='\0' ; i++){
        if(str[i]==target)     freq++;
    }
    printf("The frequency of %c in the word is %d.",target,freq);
    return 0;
}