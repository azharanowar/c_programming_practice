#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[30];
    int age;
    float gpa;
};

int main() {
    struct Date today = {20, 5, 2024};
    struct Student student1;
    strcpy(student1.name, "Azhar Anowar");
    student1.age = 23;
    student1.gpa = 4.5;

    printf("\nToday's date: %d/%d/%d\n\n", today.day, today.month, today.year);

    printf("Student Infromation: \n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %0.2f\n\n", student1.gpa);

    return 0;
}