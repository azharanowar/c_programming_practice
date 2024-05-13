#include <stdio.h>
#include <string.h>

int main()
{
    char departmentName[] = "Applied Software Engineering";

    int length = strlen(departmentName);

    printf("String: %s\n", departmentName);
    printf("Length: %d\n", length);

    return 0;
}