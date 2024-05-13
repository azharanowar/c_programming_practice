#include <stdio.h>

int main()
{
    int i = 10, j = 20;

    printf("%d %d %d\n", i, j); // Whatever we put as arguments, it will only take the number of variable we provided and for unspecified one it will show garbage value.
    printf("%d\n", i, j); // Here j will be skipped because of there is no correspoding format specified 


    return 0;
}
