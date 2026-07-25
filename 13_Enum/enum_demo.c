#include <stdio.h>
enum LED_State
{
    OFF,
    ON
};

int main(void)
{
    enum LED_State led = ON;
    printf("LED State: %d\n", led);
    return 0;
}