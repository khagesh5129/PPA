#include<stdio.h>

struct student
{
    int marks;
    int age;
    char division;
};

int main()
{
    struct student obj;
    struct student *ptr = NULL;

    ptr = &obj;


    return 0;
}