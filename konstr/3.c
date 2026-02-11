#include <stdio.h>

int main(void) {
    int num = 7;

    switch (num) {
        case 3:
            printf("Число равно 3\n");
            break;
        case 7:
            printf("Число равно 7\n");
            break;
        case 9:
            printf("Число равно 9\n");
            break;
        default:
            printf("Число не входит в набор [3, 7, 9]\n");
            break;
    }

    return 0;
}