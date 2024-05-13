#include <stdio.h>

int main(void) 
{
    int m1, m2, m3, m4, m5;
    int total = 0;
    float average;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;

    average = (float)total / 5;

    printf("Average: %.2f\n", average);

    if (average >= 60)
        printf("First devision\n");
    else if (average >= 50)
        printf("Second devision\n");
    else if (average >= 40)
        printf("Second devision\n");
    else
        printf("Failed\n");


    return 0;
}