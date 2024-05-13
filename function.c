#include <stdio.h>

// Function prototype (declaration)
void message(); 
int square(int num);

int main()
{
    int number = 5;
    int result = square(number); // Calling the square function and assign it's return value to result variable.
    printf("The square of %d is %d\n", number, result);

    message(); // Calling the message function.

    return 0;
}


// Function defination... (After main function)
void message() {
    printf("\"Code never lies, comment sometimes do.\" - Linus Torvalds");
}

int square(int num)
{
    return num * num;
}