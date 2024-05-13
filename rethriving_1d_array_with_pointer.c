#include <stdio.h>

int main()
{
    int arr[3] = { 10, 20, 30 };
    int (*ptr)[3] = &arr;

    printf("Address of array: %p\n", arr);
    printf("Address held by pointer: %p\n", ptr);

    for(int i = 0; i < 3; i++) {
        // printf("Element %d: %d\n", i, arr[i]);
        printf("Element %d: %d\n", i, (*ptr)[i]);  // Data rethriving through pointer
    }

    return 0;
}