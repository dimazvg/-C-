/* пример использования локальных переменных
    в этом примере есть конструкция цикла for - перебор i
        циклы изучаются позже
Напишем программу, которая вычисляет сумму 5 чисел.
*/
#include <stdio.h>

int main() {
    int sum;               // начало области видимости sum
    sum = 0;                // попробуем удалить эту строку
    for (int i=0; i < 5; i++) {  // цикл перебирает i от 0 до 4 включительно, 
                                    // i - локальная переменная для for
        int x;              // начало области видимости x
        scanf("%d", &x);
        sum = sum + x;
    }                       // конец области видимости x
    printf("sum = %d\n", sum);

    return 0;
                            // конец области видимости sum
}