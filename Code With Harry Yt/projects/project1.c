#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0)); // seed with current time

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
  
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower Number Plz");
        }
        else{
            printf("higher Number Plz");
        }
        
        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You guessed the number is %d guesses", no_of_guesses);

    return 0;
}
