//WAP to Create voting eligibility system.
#include <stdio.h>
int main(){
    int age;
    char citizenship;
    printf("================================\n");
    printf("   VOTING ELIGIBILITY SYSTEM\n");
    printf("================================\n\n");
 
    printf("Enter your age:");
    scanf("%d",&age);
 
    printf("Are you a citizen?(y/n):");
    scanf(" %c",&citizenship);
 
    printf("\n--- Result ---\n");
 
    if(age<0 || age>120){
        printf("Invalid age entered.\n");
    }
    else if(age>=18 && (citizenship =='y' || citizenship =='Y')){
        printf("You are eligible to vote.\n");
    }
    else if(age<18 && (citizenship =='y' || citizenship =='Y')){
        printf("You are NOT eligible. You must be at least 18 years old.\n");
        printf("You can vote in %d year(s).\n",18-age);
    } 
    else{
        printf("You are NOT eligible. Only citizens can vote.\n");
    }
    return 0;
}