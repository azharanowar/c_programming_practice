#include <stdio.h>

int main(void)
{
    int num;
    float userValue, minNumber, maxNumber, range;

    printf("Enter how many number you want to input: ");
    scanf(" %i", &num);

    printf("Enter your number here: ");
    scanf(" %f", &userValue);

    minNumber = userValue;
    maxNumber = userValue;

    for (int i = 1; i < num; i++) {
        printf("Enter a number here: ");
        scanf("%f", &userValue);

        if (userValue < minNumber){
            minNumber = userValue;
        }
        
        if (userValue > maxNumber) {
            maxNumber = userValue;
        }

    }

    range = maxNumber - minNumber;
    printf("The max input number was: %.2f, min input number was: %.2f and the range is: %.2f", minNumber, maxNumber, range);

    return 0;
}