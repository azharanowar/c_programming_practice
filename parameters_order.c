#include <stdio.h>

void printCoordinates(int x, int y)
{
    printf("Coordinates: (%d, %d)\n", x, y);
}

int main()
{
    int x = 5, y = 20;

    printCoordinates(x, y); // Correct order maintained
    printCoordinates(y, x); // Wrong order maintained


    return 0;
}
