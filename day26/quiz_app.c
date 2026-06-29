//WAP to create quiz aplication.
#include <stdio.h>
#include <string.h>
int main(){
    int score=0;
    int choice;
    char answer;
// Question bank: question, options A-D, correct answer
    char questions[5][200] ={
        "Q1. What does CPU stand for?",
        "Q2. Which language is known as the mother of all languages?",
        "Q3. What is the full form of RAM?",
        "Q4. Which of the following is NOT a programming language?",
        "Q5. What symbol is used for single-line comments in C?"
    };
    char options[5][4][100] ={
        {"A. Central Processing Unit", "B. Central Program Utility", "C. Computer Processing Unit", "D. Core Processing Unit"},
        {"A. Python",                  "B. C",                       "C. Java",                     "D. COBOL"},
        {"A. Read Access Memory",      "B. Random Access Memory",    "C. Run Access Mode",          "D. Read Assign Memory"},
        {"A. Python",                  "B. HTML",                    "C. Java",                     "D. C++"},
        {"A. //",                      "B. ##",                      "C. **",                       "D. $$"}
    };
    char correctAnswers[5] = {'A', 'B', 'B', 'B', 'A'};
printf("================================\n");
printf("       QUIZ APPLICATION\n");
printf("================================\n");
printf("5 questions | 1 mark each\n");
printf("Enter A, B, C, or D for each.\n");
printf("================================\n\n");
 
for(int i=0; i<5; i++){
        printf("%s\n", questions[i]);
        for(int j=0; j<4; j++){
            printf("  %s\n", options[i][j]);
        }
        printf("Your answer:");
        scanf(" %c",&answer);
 
        // Convert lowercase to uppercase
        if(answer >= 'a' && answer <= 'd'){
            answer-=32;
        }
        if (answer == correctAnswers[i]){
            printf("Correct!\n\n");
            score++;
        } 
        else{
            printf("Wrong! Correct answer: %c\n\n", correctAnswers[i]);
        }
    }
    printf("================================\n");
    printf("           YOUR RESULT\n");
    printf("================================\n");
    printf("Score: %d/5\n",score);
    printf("Percentage: %.1f%%\n\n", (score/5.0) * 100);
 
    if(score == 5){
        printf("Grade: A+ -- Outstanding!\n");
    } 
    else if(score == 4){
        printf("Grade: A  -- Excellent!\n");
    } 
    else if(score == 3){
        printf("Grade: B  -- Good!\n");
    } 
    else if(score == 2){
        printf("Grade: C  -- Needs Improvement.\n");
    } 
    else{
        printf("Grade: F  -- Better luck next time!\n");
    }
    printf("================================\n");
    return 0;
}
