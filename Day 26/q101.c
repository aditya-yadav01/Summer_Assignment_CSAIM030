#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, g, count = 0;

    srand(time(NULL));
    n = rand() % 100 + 1;

    printf("Number Guessing Game\n");
    printf("Guess a number between 1 and 100\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &g);

        count++;

        if (g == n)
        {
            printf("Correct! You guessed it in %d attempts.\n", count);
            break;
        }
        else if (g > n)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Too low!\n");
        }
    }

    return 0;
}