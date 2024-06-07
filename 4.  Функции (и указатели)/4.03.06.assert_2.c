#include <stdio.h>      // чтобы работали scanf и printf
#include <assert.h>     // чтобы работал assert
#include <math.h>       // чтобы работало fabs - не забываем собирать с ключом -lm
#define EPS 0.0001      // требуемая точность сравнения

float fahr(int cel)
{
    return (cel * 1.8) + 32;
}

int eps(float a, float b)
{
    return fabs(a - b) < EPS;
}

int main()
{
    int cel;    // градусы Цельсия
    float f;    // градусы Фаренгейта

    // тесты
    assert(32 == fahr(0));
    assert(122 == fahr(50));
    assert(-40 == fahr(-40));
    //assert(33.8 == fahr(1));  // failed test
    assert(eps(33.8, fahr(1)));         // |a - b| < EPS

    /*
    // для произвольного числа
    scanf("%d", &cel);
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);
    */

    return 0;
}