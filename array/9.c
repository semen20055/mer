#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Удаляем символ новой строки
        len--;
    }

    printf("Строка в обратном порядке: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
