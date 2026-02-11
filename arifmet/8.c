#include <stdio.h>

int main(void) {
    int x = 50;
    int y = 10;
    printf("Разность: %d\n", x - y);
    printf("Произведение: %d\n", x * y);
    printf("Частное: %.2f\n", (double)x / y);
    return 0;
}