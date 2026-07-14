#include <stdio.h>
int main(void)
{
    const float PI = 3.14159;
    printf("Enter the radius of the circle");
    float radius;
    scanf("%f, &radius");
    float area = PI * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}