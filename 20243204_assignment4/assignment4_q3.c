#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

void printStudents(struct Student *students, int numOfStudents)
{
    printf("\nStudent details: \n");
    printf("----------------------------------------\n");
    printf("SL.N   Name            Roll No.    Marks\n");
    printf("----------------------------------------\n");
    int serialNo = 1;
    for(int i = 0; i < numOfStudents; i++) {
        printf("%-6d %-15s %-11d %-6.2f\n\n", serialNo++, students[i].name, students[i].rollNo, students[i].marks);
        // printf("  - %d - \t       - %s -     \t      - %d -    \t      - %0.2f -   \n", serialNo++, students[i].name, students[i].rollNo, students[i].marks);
        // printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
    printf("----------------------------------------\n");
}


int main()
{
    struct Student students[3] = {
        {"Azhar Anowar", 204, 88.5},
        {"John Doe", 303, 85.5},
        {"Alice Kim", 501, 84.5}
    };

    printStudents(students, 3);

    return 0;
}
