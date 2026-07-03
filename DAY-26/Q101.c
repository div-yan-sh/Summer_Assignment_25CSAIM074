#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Q101: Number guessing game
int main() {
    srand((unsigned)time(NULL));
    int secret = rand() % 100 + 1; // 1..100
    int guess, attempts = 0;
    printf("I have chosen a number between 1 and 100. Try to guess it!\n");
    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) break;
        attempts++;
        if (guess < secret) printf("Too low!\n");
        else if (guess > secret) printf("Too high!\n");
        else { printf("Correct! You took %d attempts.\n", attempts); break; }
    }
    return 0;
}
