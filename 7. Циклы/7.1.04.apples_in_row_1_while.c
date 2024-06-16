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

    int i = 0, summ = 0, x;
    while (i < n) {
        scanf("%d", &x);
        summ += x;
        // printf("x == %d and summ == %d\n", x, summ);
        i++;
    }

    // printf("Всего %d яблок\n", summ);
    printf("%d\n", summ);

    return 0;
}