#include <stdio.h>

int globalVar = 100;          // Global Variable

void test()
{
    static int staticVar = 0; // Static Local Variable

    int localVar = 10;        // Local Variable

    staticVar++;

    printf("Global Variable : %d\n", globalVar);
    printf("Static Variable : %d\n", staticVar);
    printf("Local Variable  : %d\n", localVar);
}

int main()
{
    printf("First Function Call\n");
    test();

    printf("\nSecond Function Call\n");
    test();

    return 0;
}