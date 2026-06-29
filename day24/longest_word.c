//WAP to Find longest word.
#include<stdio.h>
#include<string.h>
int main(){
    char str[200],longest[50];
    int i=0, len=0 , maxlen=0;
    printf("Enter a sentence:");
    fgets(str, sizeof(str), stdin);
    char word[50];
    while(1){
        if(str[i] !=' ' && str[i] !='\0' && str[i] !='\n'){
            word[len++] = str[i];
        } 
        else{
            word[len]='\0';
            if (len>maxlen) {
                maxlen=len;
                strcpy(longest, word);
            }
            len = 0;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }
    printf("Longest word :%s\n",longest);
    printf("Length:%d",maxlen);
    return 0;
}