#include <stdio.h>

int main(void) {

    int i, j, k;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            for (k = 1; k <= 3; k++) {
                if (i == 3 && k == 3) {
                    goto found;
                } else {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }

    return 0;


    found: 
        printf("Target value found, Hurrayyyy!\n");

        return 0;
}