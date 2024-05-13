#include <stdio.h>

int main(void) {
    int i = 3;
    switch(i) 
    {
        case 1:
            printf("In case 1\n");
            break;
        case 2:
            printf("In case 2\n");
            break;
        case 3:
            printf("In case 3\n");
            break;
        case 4:
            printf("In case 4\n");
            break;
        default:
            printf("In case default\n");
    }

    return 0;
}