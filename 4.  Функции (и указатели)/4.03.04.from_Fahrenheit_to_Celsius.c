/* Напишем функцию, которая переводит температуру из градусов Фаренгейта F в градусы Цельсия C по формуле
        F = C * 9/5 + 32
        C = 5/9 * (F - 32)
*/
#include <stdio.h>

float celsius(int fahr); // функция перевода градусов Фаренгейта в Цельсия

int main() {
    int fahr;    // градусы Фаренгейта
    float c;    // градусы Цельсия

    // тест 1
    fahr = 32;
    c = celsius(fahr);
    printf("test 1:    F = %d, \tC = %.2f\n", fahr, c);

    // тест 2
    fahr = 122;
    c = celsius(fahr);
    printf("test 2:    F = %d, \tC = %.2f\n", fahr, c);

    // тест 3
    fahr = -40;
    c = celsius(fahr);
    printf("test 3:    F = %d, \tC = %.2f\n", fahr, c);

    // тест 4
    fahr = 33;
    c = celsius(fahr);
    printf("test 4:    F = %d, \tC = %.2f\n", fahr, c);

    // пользовательский тест
    printf("--- User test ---\nF = ");
    scanf("%d", &fahr);
    c = celsius(fahr);
    printf("F = %d, C = %.2f\n", fahr, c);

    return 0;
}

float celsius(int fahr) {
    float res;
    res = (fahr - 32) * 5 / 9.0;

    return res;
}