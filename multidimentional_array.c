#include <stdio.h>

int main()
{
    int students[4][2];
    int i, j;

    for(i = 0; i < 4; ++i) {
        printf("Enter roll number and marks for student %d: ", i + 1);
        scanf("%d %d",  &students[i][0], &students[i][1]);
    }

    printf("\nEntered data:\n");

    for (i = 0; i < 4; ++i) {
        printf("Student %d: Roll number = %d, Marks = %d\n", i + 1, students[i][0], students[i][1]);
    }

    return 0;
}