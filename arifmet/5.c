#include <stdio.h>
#include <math.h> // Для fmod()

int main(void) {
    float a = 12.5f;
    float b = 2.3f;
    float remainder = fmod(a, b); // Остаток от деления для float
    printf("Остаток от деления %.1f на %.1f равен %.2f\n", a, b, remainder);
    return 0;
}