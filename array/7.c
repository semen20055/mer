#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RAND 100

int main(void) {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    srand(time(NULL));

    int arr[n];
    printf("Массив случайных чисел:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % MAX_RAND;
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
