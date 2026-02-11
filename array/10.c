#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введите два целых числа (a и b): ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Ошибка: деление на ноль!\n");
        return 1;
    }

    double result = (double)a / b;
    printf("Результат деления a/b: %.2lf\n", result);

    return 0;
}
