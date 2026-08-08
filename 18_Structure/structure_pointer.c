#include <stdio.h>

struct Student
{
    int age;
    float cgpa;
};

int main()
{
    struct Student s1;

    struct Student *ptr = &s1;

    ptr->age = 20;
    ptr->cgpa = 9.2;

    printf("Age : %d\n", s1.age);
    printf("CGPA : %.1f\n", s1.cgpa);

    return 0;
}