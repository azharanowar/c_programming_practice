#include <stdio.h>

int main(void)
{   
    int n, number, triagularNumber, i;
    for (i = 5; i <= 50; i += 5)
    {
        number = i;
        triagularNumber = 0;

        n = 1;
        while (n <= number) {
            triagularNumber += n;
            n++;
        }
        
        printf("Triangular number %i is %i\n", number, triagularNumber);
    }

    return 0;
}


