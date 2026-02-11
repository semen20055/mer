#include <stdio.h>

int main(void) {
    int a = 100;
    int b = 30;
    int c = 15;
    int sum = a + b + c;
    double average = sum / 3.0;
    printf("Сумма a, b и c: %d\n", sum);
    printf("Среднее арифметическое: %.2f\n", average);
    return 0;
}