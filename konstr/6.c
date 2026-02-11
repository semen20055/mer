#include <stdio.h>

int main(void) {
    int value;
    printf("Введите число: ");
    scanf("%d", &value);

    if (value == 0) {
        printf("Zero\n");
    } else if (value > 0) {
        printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}