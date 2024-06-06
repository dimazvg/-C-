/* задача ИМТ (индекс массы тела) - пример на преобразование типов */
#include <stdio.h>

int main()
{
    float m;    // масса, кг
    int hsm;    // рост, см

    scanf("%f%d", &m, &hsm);        // читаем входные данные
    float h = (float)hsm / 100;     // рост в метрах

    float imt = m / (h * h);        // индекс массы тела (формула Кетле)

    printf("%f\n", imt);

    return 0;
}