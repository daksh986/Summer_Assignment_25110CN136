//WAP to Check string rotation.
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100], s2[100];
    printf("Enter 1st string:");
    scanf("%[^\n]",s1);
    printf("Enter 2nd string:");
    scanf(" %[^\n]",s2);
    if(strlen(s1)!=strlen(s2)){
        printf("not a rotation.");
        return 1;
    } 
    char s3[200];
    strcpy(s3,s1);
    strcat(s3,s1);
    if(strstr(s3 , s2) != NULL)
        printf("Rotation.");
    else
        printf("Not a rotation.");
    return 0;
}