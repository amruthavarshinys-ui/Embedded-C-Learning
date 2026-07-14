#include <stdio.h>

int main(void)
{
    const int SENSOR_PIN = 34;
    const int ADC_RESOLUTION = 4096;
    const float REFERENCE_VOLTAGE = 3.3f;

    printf("Sensor Pin: %d\n", SENSOR_PIN);
    printf("ADC Resolution: %d\n", ADC_RESOLUTION);
    printf("Reference Voltage: %.1f V\n", REFERENCE_VOLTAGE);

    return 0;
}