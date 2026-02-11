#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main(void) {
    int month, year;
    printf("Введите месяц (1-12): ");
    scanf("%d", &month);
    printf("Введите год: ");
    scanf("%d", &year);

    int days;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Некорректный месяц\n");
            return 1;
    }

    printf("В месяце %d года %d дней\n", month, days);
    return 0;
}
