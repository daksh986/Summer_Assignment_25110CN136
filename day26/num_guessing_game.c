//WAP to Create number guessing game.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int secret, guess, attempts=0;
    int maxAttempts=7;

    srand(time(0));
    secret = rand() % 100 + 1;
    printf("================================\n");
    printf("    NUMBER GUESSING GAME\n");
    printf("================================\n");
    printf("Guess the number between 1 and 100.\n");
    printf("You have %d attempts.\n\n", maxAttempts);
 
    while(attempts<maxAttempts){
        printf("Attempt %d/%d - Enter your guess:",attempts+1,maxAttempts);
        scanf("%d",&guess);
        attempts++;
 
        if(guess==secret){
            printf("\nCongratulations! You guessed it in %d attempt(s).\n",attempts);
            return 0;
        } 
        else if(guess<secret){
            printf("Too low! Try higher.\n\n");
        }
        else{
            printf("Too high! Try lower.\n\n");
        }
    }
    printf("\nGame Over! The number was %d.\n", secret);
    return 0;
}