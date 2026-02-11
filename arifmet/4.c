#include <stdio.h>

int main(void) {
    int num1 = 25;
    int num2 = 10;
    int difference = num1 - num2;
    double quotient = (double)num1 / num2; // Приведение к double для вещественного деления
    printf("Разность: %d\n", difference);
    printf("Частное: %.2f\n", quotient);
    return 0;
}