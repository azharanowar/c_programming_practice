#include <stdio.h>

// Formal Arguments (aka Fromal Parameters)
int calculateArea(int length, int width)
{
    int area = length * width;

    return area;
}

int main()
{
    int length, width, result;
    printf("Enter the length of the rectagle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectagle: ");
    scanf("%d", &width);


    result = calculateArea(length, width);  // Passing user inputs as "Actual Argumets"
    printf("The area of the rectangle is: %d\n", result);


    return 0;
}
