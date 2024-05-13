#include <stdio.h>

int main()
{
    int arr[3][2] = { {1, 2}, {3, 4}, {5, 6} };  // Pre-determined 2D Array... 

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            // printf("%d ", arr[i][j]);  // Normal way to rethrive 2D arrays value...
            printf("%d ", *(*(arr + i) + j) );  // 2D Array with pointer... With this *(*(arr + i) + j) we are rethriving 2D array data with pointer for single dimentional array we will use *(arr + i)
        }

         printf("\n");

    }

    return 0;
}