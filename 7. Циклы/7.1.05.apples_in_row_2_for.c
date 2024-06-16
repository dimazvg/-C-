/* Собрать яблоки в ряду
В ряду растёт n яблонь.
На каждой i-той яблоне ai яблок.
Сколько яблок на всех яблонях?
Пример входных данных (n, a1, a2, a3):
    3
    5 2 10
Выходные данные:
    17
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%dD", &n);

    int summ = 0, x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        summ += x;
        // printf("x == %d and summ == %d\n", x, summ);
    }

    // printf("Всего %d яблок\n", summ);
    printf("%d\n", summ);

    return 0;
}