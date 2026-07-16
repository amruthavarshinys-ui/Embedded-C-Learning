#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t ledpin= 2;
    uint16_t adcvalue= 2048;
    uint32_t timestamp= 100000;
    printf("LED Pin = %u\n", ledpin);
    printf("ADC Value = %u\n", adcvalue);
    printf("Timestamp = %u\n", timestamp);
    return 0;
}