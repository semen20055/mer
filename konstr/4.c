#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All numbers are equal\n");
    } else if (a <= b && a <= c) {
        printf("Минимальное число: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Минимальное число: %d\n", b);
    } else {
        printf("Минимальное число: %d\n", c);
    }

    return 0;
}