#include <stdio.h>

int main(void) {
    int value;
    printf("Введите число: ");
    scanf("%d", &value);

    if (value < 10 || value > 20) {
        printf("Outside the boundary (10..20)\n");
    } else {
        printf("Inside the boundary\n");
    }

    return 0;
}
