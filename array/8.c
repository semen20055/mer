#include <stdio.h>

int main(void) {
    float arr[] = {1.5f, 2.3f, 4.7f, 3.1f};
    int size = 4;
    float sum = 0.0f;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Сумма элементов массива: %.2f\n", sum);
    return 0;
}
