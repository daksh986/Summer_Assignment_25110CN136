//WAP to reverse a string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int length = 0;
printf("Enter a string: ");
scanf("%[^\n]s",str);

while (str[length]!= '\0') { // find length without strlen()
        length++;
    }
int start=0, end=length-1;
    while(start<end){
        char temp=str[start];
        str[start]= str[end];
        str[end]= temp;
        start++;
        end--;
    }
printf("Reversed string = %s\n", str);
return 0;
}