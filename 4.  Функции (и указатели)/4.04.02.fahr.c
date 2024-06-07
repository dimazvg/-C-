/* функция перевода градусов Цельсия в градусы Фаренгейта
    Пример с использованием прототипа функции
*/
#include <stdio.h>

float fahr(int cel);    // прототип

int main()
{
    int cel;
    float f;

    scanf("%d", &cel);

    f = fahr(cel);      // вызов функции

    printf("C = %d, F = %.2f\n", cel, f);

    return 0;
}


float fahr(int cel)     // определение (реализация) функции
{
    return (cel * 1.8) + 32;
}