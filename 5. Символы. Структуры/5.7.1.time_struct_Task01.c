/*  time_struct 12-часовой циферблат
Ручные часы имеют 12 часовой циферблат (от 00:00 до 11:59).
Для хранения и представления показаний часов используется структура TicTac (ниже в программе)
Написать следующие функции для работы с часами:
TicTac after(TicTac a, int min);
    // получает показание часов a и возвращает показание этих часов через min минут, .
void forward(TicTac * me, TicTac a);
    // "переводит" вперед стрелки этих часов (me) на a.h часов и a.min минут
void backward(TicTac * me, TicTac a);
    // "переводит" назад стрелки этих часов (me) на a.h часов и a.min минут
int isEqualTime(TicTac a, TicTac b);
    // проверяет совпадают ли показания часов a и b, если совпадают, возвращает 1, если нет - 0
void printTic(TicTac a);
    // печатает показания этих часов в формате hh:mm\n
можно добавлять свои функции
функция main дана (ниже в программе)
Sample Input:
    02:10 25 02:10
Sample Output:
    equal: 1
    after: 02:35
    forward: 04:20
    backward: 00:00
*/
#include <stdio.h>

typedef struct{
    int h;      // часы
    int min;    // минуты (от 0 до 59)
} TicTac;

int time2min(TicTac t);    // h, m -> mm 0:00
TicTac min2time(int mm);   // mm -> h, m

TicTac after(TicTac a, int min);        // показание часов через min минут, .
void forward(TicTac * me, TicTac a);    // "переводит" вперед стрелки часов me на a.h часов и a.min минут
void backward(TicTac * me, TicTac a);   // "переводит" назад стрелки часов me на a.h часов и a.min минут
int isEqualTime(TicTac a, TicTac b);    // сравнение показаний часов a и b
void printTic(TicTac a);                // печатает показания часов в формате hh:mm\n

int main() {
    TicTac a, b, c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n", isEqualTime(a,b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}

// h, m -> mm
int time2min(TicTac t) {
    return t.h * 60 + t.min;
}

// mm -> h, m (TicTac)
TicTac min2time(int mm) {
    TicTac res;
    res.h = mm / 60 % 12;
    res.min = mm % 60;
    return res;
}

// показание часов через min минут, .
TicTac after(TicTac a, int min) {
    return min2time(time2min(a) + min);
}

// "переводит" вперед стрелки часов me на a.h часов и a.min минут
void forward(TicTac * me, TicTac a) {
    *me = min2time(time2min(*me) + time2min(a));
}

// "переводит" назад стрелки часов me на a.h часов и a.min минут
void backward(TicTac * me, TicTac a) {
    int time_min = time2min(*me) - time2min(a);
    if (time_min < 0) time_min += 60 * 24;
    *me = min2time(time_min);
}

// сравнение показаний часов a и b
int isEqualTime(TicTac a, TicTac b) {
    int res = 0;
    if (a.h == b.h && a.min == b.min) res = 1;
    return res;
}

// печатает показания часов в формате hh:mm\n
void printTic(TicTac a) {
    printf("%02d:%02d\n", a.h, a.min);
}