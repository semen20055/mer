#include <stdio.h>

int main(void) {
    int x = 2;
    int y = 2;
    int sum = x + y;
    int product = x * y;
    printf("x = %d, y = %d\n", x, y);
    printf("Сумма: %d, Произведение: %d\n", sum, product);
    printf("Условие выполняется: %s\n", (sum == product) ? "да" : "нет");
    return 0;
}