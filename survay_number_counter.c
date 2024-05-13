#include <stdio.h>

int main()
{
    int ratingCounters[11], i, response;

    for (i = 1; i <= 10; i++)
    {
        ratingCounters[i] = 0;
    }

    printf("Enter ratings: \n");

    for (i = 1; i <=20; ++i) {
        scanf("%i", &response);

        if(response < 1 || response > 10) {
            printf("Wrong input value %i, please enter a rating from 1 to 10.\n", response);
        } else {
            ++ratingCounters[response];
        }

    }

    printf("\n\nRating Number of Response\n");
    printf("------ ----------------------\n");

    for(i = 1; i <= 10; ++i) {
            printf("%4i %14i\n", i, ratingCounters[i]);
        }

        printf("\n\n");


    return 0;
}