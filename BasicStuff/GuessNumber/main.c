#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int main() {
    srand(time(NULL));

    printf("This is the guessing game...\n");
    int winNum = 1 + rand() % 20;
    int numOfTries = 5;

    for (int i = 0; i < 5; i++) {
        int guess;
        do {
            printf("Take a guess, a number between 1 and 20: ");
            scanf("%d", &guess);
        } while(guess < 1 || guess > 20);

        if (guess == winNum) {
            printf("CONGRATS! You guessed the number!\n");
            break;
        } else {
            printf("WRONG! Try again. You have %d tries left bud.\n", --numOfTries);
        }
    }
    printf("You suck! The correct number was %d\n", winNum);

    return 0; 
}
