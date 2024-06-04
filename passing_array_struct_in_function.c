#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

void printStudents(struct Student *students, int numOfStudents)
{
    printf("Student details: \n\n");
    printf(" - SL.N -     - Name -     \t     - Roll No -    \t     - Marks -   \n");
    int serialNo = 1;
    for(int i = 0; i < numOfStudents; i++) {
        printf("  - %d - \t       - %s -     \t      - %d -    \t      - %0.2f -   \n", serialNo++, students[i].name, students[i].rollNo, students[i].marks);
        // printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
}


int main()
{
    struct Student students[3] = {
        {"Azhar Anowar", 204, 88.5},
        {"Sijan Khan", 215, 85.5},
        {"Al-Rafi Azad", 233, 84.5}
    };

    printStudents(students, 3);

    return 0;
}
