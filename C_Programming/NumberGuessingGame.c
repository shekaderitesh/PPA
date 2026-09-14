#include <stdio.h>

int main() {
    int secret = 25;
    int guess;

    printf("Guess the number (1-50): ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Correct! You won!\n");
    else if (guess < secret)
        printf("Too low!\n");
    else
        printf("Too high!\n");

    return 0;
}
