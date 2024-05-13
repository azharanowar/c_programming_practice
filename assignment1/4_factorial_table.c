#include <stdio.h>

int main() {
    int i, j;
    long fact = 1;

    for (i = 1; i <= 10; i++) {
        fact = 1;
        for (j = 1; j <= i; j++) {
            fact *= j; // Calculate factorial value
        }
        printf("%2d! = %d\n", i, fact);
    }

    return 0;
}
