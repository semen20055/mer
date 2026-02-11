#include <stdio.h>
#include <math.h> // Для sqrt() и pow()

int main(void) {
    int x = 3;
    int y = 4;
    float distance = sqrt(pow(x, 2) + pow(y, 2));
    printf("Расстояние от начала координат до точки (%d, %d): %.2f\n", x, y, distance);
    return 0;
}