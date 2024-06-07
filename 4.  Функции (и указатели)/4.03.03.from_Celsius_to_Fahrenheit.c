/* Напишем функцию, которая переводит температуру из градусов Цельсия C в градусы Фаренгейта F по формуле
        F = C * 9/5 + 32
*/
#include <stdio.h>

float fahr(int cel); // функция перевода градусов Цельсия в Фаренгейты

int main() {
    int cel;    // градусы Цельсия
    float f;    // градусы Фаренгейта

    // тест 1
    cel = 0;
    f = fahr(cel);
    printf("test 1:    C = %d, \tF = %.2f\n", cel, f);

    // тест 2
    cel = 50;
    f = fahr(cel);
    printf("test 2:    C = %d, \tF = %.2f\n", cel, f);

    // тест 3
    cel = -40;
    f = fahr(cel);
    printf("test 3:    C = %d, \tF = %.2f\n", cel, f);

    // тест 4
    cel = 1;
    f = fahr(cel);
    printf("test 4:    C = %d, \tF = %.2f\n", cel, f);

    // пользовательский тест
    printf("--- User test ---\nC = ");
    scanf("%d", &cel);
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);

    return 0;
}

float fahr(int cel) {
    float res;
    res = (cel * 1.8) + 32;

    return res;
}