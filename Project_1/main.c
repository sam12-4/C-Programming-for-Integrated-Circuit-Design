// We will write a program that generates a random number and asks the player to guess
// it. If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.
// When the user guesses the correct number, the program displays the number of
// guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int guessed_number, number_of_guesses = 0;
    printf("Guess number between 1 and 100 : ");
    // printf("%d", random_number);
    scanf("%d", &guessed_number);
    while (guessed_number!=random_number)
    {
        if (guessed_number < random_number){
            printf("Higher number please ");
            scanf("%d", &guessed_number);
        }
        else{
            printf("Lower number please ");
            scanf("%d", &guessed_number);
        }
        number_of_guesses+=1;
    }
    printf("You guessed the number correct which was %d and you took %d guesses to complete", random_number, number_of_guesses );

    return 0;
}