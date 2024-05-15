/*  Пример: Отрезок на оси Х
Опишем структуру для хранения одномерного отрезка по оси Х [start, finish]. 
И определим отрезки a [-4, 7] и b [6, 0]. Объявим еще один отрезок m и введем его начало и конец с клавиатуры.
*/
#include <stdio.h>

// объявили новый тип данных struct Segment (одномерный отрезок)
struct Segment {
    int start;    // один конец отрезка (левый)
    int finish;   // другой конец отрезка (правый)
};

int main() {
    struct Segment a = {-4, 7}, b;
    b.start = 6;
    b.finish = 0;
    
    // распечатаем эти отрезки:
    printf("a = [%d, %d]\n", a.start, a.finish);
    printf("b = [%d, %d]\n", b.start, b.finish);

    struct Segment m;
    scanf("%d", &m.start);  // читаем
    scanf("%d", &m.finish);
    // печатаем
    printf("m = [%d, %d]\n", m.start, m.finish);

    return 0;
}