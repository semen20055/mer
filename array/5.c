#include <stdio.h>

int main(void) {
    char op;
    double a, b, result;

    while (1) {
        printf("Введите операцию (или 'q' для выхода): ");
        scanf(" %c", &op);

        if (op == 'q') {
            break;
        }

        printf("Введите два числа: ");
        scanf("%lf %lf", &a, &b);

        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b != 0) {
                    result = a / b;
                } else {
                    printf("Ошибка: деление на ноль!\n");
                    continue;
                }
                break;
            default:
                printf("Неизвестный оператор!\n");
                continue;
        }

        printf("Результат: %.2lf\n", result);
    }

    return 0;
}
