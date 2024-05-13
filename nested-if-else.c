#include <stdio.h>

int main(void) 
{
    int score = 70;

    if (score >= 70) 
    {
        printf("You have passed the exam!\n");

        if (score >= 90) {
            printf("Excellent job! (Your score: %d)\n", score);
        } else if (score >= 80) 
        {
            printf("Good job! (Your score: %d)\n", score);
        } else
        {
            printf("You have passed with a satisfactory score! (Your score: %d)\n", score);
        }
    } else 
    {
        printf("We are sorry, you have failed the exam! Please re-take next time with proper practice.");
    }

    return 0;
}