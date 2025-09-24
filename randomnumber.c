#include <stdio.h>
#include <stdlib.h>
#include <time.h>                     // NUMBER GUESSING NUMBER //

int main() {
    // Initialize random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;
    

    printf("Guesss The Number :\n");
    // printf("Random number between 1 and 100: %d\n", randomNumber);
    
    do
    { 
        scanf("%d", &guessed);
        number_of_guesses++;
        if (guessed>randomNumber)
        {
            printf("lower number please : ");
        }
        else if (guessed<randomNumber)
        {
            printf("higher number please : ");
        }
         else{
            printf("[success]! congrats you guessed the correct random number in %d attempts :)", number_of_guesses);
        }
    } while (guessed != randomNumber);

     
    
    

    return 0;
}
