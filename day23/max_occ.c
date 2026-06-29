//WAP to find maximum occuring character.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int freq[256]={0};  //it will cover  all ASCII characters
    int maxCount=0;
    char maxChar;
    printf("Enter a string:");
    scanf("%99[^\n]",str); //reads string including spaces

    for(int i=0; str[i]!='\0'; i++){
        freq[(unsigned char)str[i]]++; // Counting frequency of each character
    }
//Finding the character with max frequency
    maxChar=str[0];
    for(int i=0; i<256; i++){
        if(freq[i] > maxCount){
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }
    printf("Max occurring character:'%c'\n", maxChar);
    printf("Frequency:%d", maxCount);
    return 0;
}