#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введите a и b: ");
    scanf("%d %d", &a, &b);

    printf("Нечётные числа в диапазоне [%d, %d]:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
