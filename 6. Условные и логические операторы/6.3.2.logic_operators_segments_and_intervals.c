/* Логические операторы и математические задачи.
Пример проверки, принаджежит ли x отрезку [a, b] и принаджит ли y интервалу (-INF, a) u (b, INF).
Для проверки составим сложные условия с логическим оператором И (&&) и ИЛИ (||).
*/
#include <stdio.h>

int main()
{
    printf("Введите границы отрезка a, b (целые): ");
    int a, b;
    scanf("%d%d", &a, &b);

    printf("Введите координату точки x (целое): ");
    int x;
    scanf("%d", &x);
    if (x >= a && x <= b)
        printf("x in [%d, %d]\n", a, b);
    else
        printf("x not in [%d, %d]\n", a, b);

    printf("Введите координату точки y (целое): ");
    int y;
    scanf("%d", &y);
    if (y < a || y > b)
        printf("x in (-INF, %d) U (%d, INF)\n", a, b);
    else
        printf("x not in (-INF, %d) U (%d, INF)\n", a, b);

    return 0;
}
