/* Очень страшные вороны 2 - continue через goto
--- та же задача про сад с яблоками, но дополнительно добавляются вороны ---
    На некоторых яблонях сидят вороны.
    Они съели все яблоки на своей яблоне и хотят ещё яблок.
    Вороны налетают на корзину и каждая ворона уносит 1 яблоко.
    Если на дереве 5 ворон, будем обозначать их -5.
    Задача: собрать все яблоки с ряда с учётом ворон.
    Обратите внимание, что после ворон в корзине не может остаться -2 яблока. Яблоки настоящие.
Если встретилась яблоня с воронами
    - убегаем из всего сада
    - уносим корзину с уже собраными яблоками - В ЭТОМ ПРИМЕРЕ ВЫПОЛНЯЕМ ЭТОТ ВАРИАНТ
=== используем goto ===
goto МЕТКА;  // передать упрвление на строку с поставленной меткой
МЕТКА:   // поставить метку
!!! ПЛОХО - использование оператора goto нарушает принципы структурного программирования и ведёт к плохому коду
=======================
!!! ПРИМЕР НЕ РАБОТАЕТ, т.к. нет очистки буффера stdin
*/
#include <stdio.h>

int main()
{
    int rows;               // рядов яблонь
    scanf("%d", &rows);

    int total = 0;          // яблок собрали во всех рядах
    for (int i = 0; i < rows; i++) {
        int n;      // количество яблонь в ряду
        scanf("%d", &n);
        int summ = 0;
        int x;
        for (int j = 0; j < n; j++) {
            scanf("%d", &x);
            if (x < 0) goto NEXT_ROW;
            summ += x;
        }
        NEXT_ROW:
        total += summ;
        printf("Закончили %d-ый ряд. Собрали %d яблок\n", i, total);
    }

    printf("В саду всего %d яблок\n", total);

    return 0;
}