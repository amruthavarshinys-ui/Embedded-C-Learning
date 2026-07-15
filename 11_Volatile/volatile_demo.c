#include <stdio.h>
int main(void)
{
    volatile int sensorvalue = 100;
    printf("Sensor Value: %d\n", sensorvalue);
    return 0;
}