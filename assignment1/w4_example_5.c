/*Example 5: Using Nested for Loops*/
#include <stdio.h>
int main(void)
{   
    int n, number, triagularNumber, counter;
    for (counter = 1; counter <= 5; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        triagularNumber = 0;

        // for (n = 1; n <= number; ++n)
        // {
        //     triagularNumber += n;
        // }

        n = 1;
        while (n <= number) {
            triagularNumber += n;
            n++;
        }
        
        printf("Triangular number %i is %i\n", number, triagularNumber);
    }

    return 0;
}


