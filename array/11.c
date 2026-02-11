#include <stdio.h>
#include <ctype.h> // Для toupper()

#define MAX_LINE_LEN 1000

int main(void) {
    char line[MAX_LINE_LEN];

    printf("Вводите строки (пустая строка для завершения):\n");

    while (1) {
        fgets(line, sizeof(line), stdin);

        // Проверяем, пустая ли строка
        if (line[0] == '\n') {
            break;
        }

        // Удаляем символ '\n' в конце строки
        int len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        // Выводим строку в верхнем регистре
        printf("В верхнем регистре: ");
        for (int i = 0; line[i] != '\0'; i++) {
            printf("%c", toupper(line[i]));
        }
        printf("\n");
    }

    printf("Завершение работы.\n");
    return 0;
}
