#include <stdio.h>

int main(void) 
{
    int matchsticks = 21;
    int userChoose, computerChoose;

    while (matchsticks > 1) {
        printf("Remained matchsticks = %d. Enter a number for choosing sticks between 1, 2, 3 or 4: ", matchsticks);
        scanf("%d", &userChoose);

        if ( (userChoose <= 4 && userChoose >= 1) && matchsticks > userChoose ) {
            matchsticks -= userChoose;
            printf("User picked %d matchstick/s and available matchstick/s = %d \n", userChoose, matchsticks);
        } else {
            printf("\n\nWrong matchsticks number entered, please enter a valid sticks number...\n\n");
            
            continue; // To start from the loop again...
        }

    computerChoose = 5 - userChoose;
    matchsticks -= computerChoose;
    printf("Computer picked %d matchstick/s and available matchstick/s = %d \n", computerChoose, matchsticks);
    

    if ( matchsticks == 1 ) {
        printf("You picked the last match, so you lose the game!");
    }

    }


    return 0;
}