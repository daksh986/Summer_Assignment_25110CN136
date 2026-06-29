//WAP to check anagram strings.
#include<stdio.h>
#include<string.h>
void sortString(char str[]){
    int n=strlen(str);
    char temp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++) {
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;  }
            }
        }
    }
int main(){
    char str1[100], str2[100];
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);

    if(strlen(str1) != strlen(str2)){
        printf("The strings are not anagrams.");
        return 0;
    }
    sortString(str1);
    sortString(str2);

    if(strcmp(str1,str2)==0)
        printf("The strings are anagrams.");
    else
        printf("The strings are NOT anagrams.\n");
    return 0;
}