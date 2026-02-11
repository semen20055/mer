#include <stdio.h>

int main(void) {
    int age1 = 25;
    int age2 = 35;
    double average = (age1 + age2) / 2.0; // 2.0 обеспечивает вещественный результат
    printf("Среднее арифметическое возрастов %d и %d: %.1f\n", age1, age2, average);
    return 0;
}