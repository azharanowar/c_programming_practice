/*Example 4: Asking users for input - for loop  */
#include <stdio.h>

int main(void)
{
    int n, number, triagularNumber;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triagularNumber = 0;

    for(n=1; n <= number; ++n)
    {
        triagularNumber += n;
    }
    printf("Triangular number %i is %i\n", number, triagularNumber);
          
    return 0;
}


