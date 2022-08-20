#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Guess the secret number: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1)
    {
        printf("Sorry, you are out of guesses. Please try again.");
    }
    else
    {
        printf("You Win!");
    }

    return 0;
}