#include <stdio.h>

int main()
{

    int i = 10;
    int *j;
    int **k;

    j = &i;
    k = &j;

    printf("Value of i (direct): %d\n", i);
    printf("Value of i (through j): %d\n", *j);
    printf("Value of i (through k): %d\n", **k);

    // Modify value of i

    *j = 25;
    printf("New value of i: %d\n", i);



    // Here double ** means we are creating chain and it's reference to more than one variable location
    // We also can create multiple strick(*) like ***, **** or ***** but we must have to maintain the chain, if one chain is missing the program will be broken

    return 0;
}