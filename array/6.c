#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    int arr[MAX_SIZE];
    int count = 0;
    int num;

    while (fscanf(file, "%d", &num) == 1 && count < MAX_SIZE) {
        arr[count++] = num;
    }

    fclose(file);

    printf("Массив из файла:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
