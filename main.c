#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    
    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("\nCongratulations! You guessed it in %d attempts.\n", attempts);

    } while (guess != secret);

    return 0;
}
