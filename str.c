#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[]="Hello";
    char str2[10];
    snprintf(str2, sizeof(str2),"%s",str1);
    printf("Source string (str1):%s\n",str1);
    printf("Copied string (str2):%s\n",str2);
    return 0;
}