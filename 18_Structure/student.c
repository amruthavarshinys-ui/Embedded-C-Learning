#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float cgpa;
};

int main()
{
    struct Student s1;

    s1.age = 20;
    s1.cgpa = 9.2;

    printf("Age : %d\n", s1.age);
    printf("CGPA : %.1f\n", s1.cgpa);

    return 0;
}