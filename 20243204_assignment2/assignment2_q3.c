#include <stdio.h>

int userInput() {
    int userGivenNumber;
    printf("Enter a 5 digits positive number: ");
    scanf("%i", &userGivenNumber);

    return userGivenNumber;
}

int validUserInput() {
    // printf("The average number of the array values is: %i\n", userGivenNumber);  

    int userGivenNumber = userInput();
    int number = userGivenNumber;
    int count = 0;
    do {
        number /= 10;
        count++;
    } while (number != 0);
    // printf("Count: %i\n", count);  

    if (userGivenNumber < 0) {
        printf("Invalid input!, The number must be positive value\n\n");

        validUserInput();
    } else if(count != 5) {
        printf("Invalid input!, The number must be a 5 digits number\n\n");

        validUserInput();
    } else {
        // Valid user input so return the value to function calling...
        printf("Perfect input with positive and 5 digits value.\n\n");

        return userGivenNumber;
    }
}

int sum = 0;
int recursiveSum(int number) {
    if (number > 0) {
        sum += number % 10;
        recursiveSum(number / 10); // Calling same function as recursive fuction with condition match...
    } else {
        return sum; // Number is zero or less than zero mean there is no digit to check so the work is done...
    }

    return sum;
}

int main()
{
    int userGivenNumber;
    userGivenNumber = validUserInput(); // Getting user input and validate by separate functions...
    int sum = recursiveSum(userGivenNumber); // Calling recursive function for the first time...
    printf("Sum of the given number of 5 digits (%i) is: %i", userGivenNumber, sum);

    return 0;
}