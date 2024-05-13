#include <stdio.h>

void auto_static(void)
{
    int autoVar = 1; // Everytime when ever the function will be called it will initialize the value = 1
    static int staticVar = 1; // But for the static variable it will remain it's previous value and will not initilize again so the value will not be always 1, rather it will increament
    printf("Automatic = %d, static = %d\n", autoVar, staticVar);
    ++autoVar;
    ++staticVar;
}

int main(void)
{
    int i;

    void auto_static(void);

    for(i = 0; i < 5; ++i) {
        auto_static();
    }


    return 0;
}
