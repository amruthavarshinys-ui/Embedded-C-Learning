#include <stdio.h>
int main(void)
{
    volatile int counter = 0;
    printf("Counter Value: %d\n", counter);

    counter++;
    printf(" Counter = %d\n", counter);
    return 0;
}