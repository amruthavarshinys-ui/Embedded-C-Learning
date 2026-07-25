#include <stdio.h>

enum Traffic_light{
    RED,
    YELLOW,
    GREEN
};

int main(void){
    enum Traffic_light light = RED;
    printf("The led light is: %d\t", light);
    return 0;
}