//WAP to count words in a sentence.
#include<stdio.h>
int main(){
    char str[100];
    printf("Type a sentence: ");
    scanf("%[^\n]s",str);
    int words=1;
    for(int i=0 ; str[i]!='\0' ; i++){
        if(str[i]==' ')     words++;
    }
    printf("The number of words in the sentence is %d",words);
    return 0;
}