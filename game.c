#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;
    int attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("================================\n");
    printf("       NUMBER GUESSING GAME\n");
    printf("================================\n");

    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n\n");
        }
        else if (guess > number) {
            printf("Too high! Try again.\n\n");
        }
        else {
            printf("\n🎉 Correct! You guessed the number!\n");
            printf("Number of attempts: %d\n", attempts);
        }

    } while (guess != number);

    printf("\nThanks for playing! 🎮\n");

    return 0;
}