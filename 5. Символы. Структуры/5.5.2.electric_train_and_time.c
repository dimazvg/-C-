/*  Пример: Когда приедет электричка?
Напишем функции, которые переводят время в часах и минутах в минуты с 0:00, а потом обратно. 
Определим структуру Time с полями h (часы) и m (минуты).
Напишем функции работы со структурой и решим задачу, во сколько прибудет электричка, которая отправилась 
в h1:m1 и ехала dh:dm? В зависимости от циферблата можем получить разное "во сколько". 
Напишем решение для 24-часового циферблата.
*/
#include <stdio.h>
#include <assert.h>

struct Time {
    int h;      // часы
    int m;      // минуты
};

void print_time(struct Time t);
int time2min(struct Time t);    // Time -> min
struct Time min2time(int mm);   // mm -> h, m
int is_equal(struct Time t1, struct Time t2);  // сравнение структур Time
struct Time add(struct Time t1, struct Time t2);  // сложение структур Time

int main() {
    struct Time t1 = {22, 55};
    struct Time dt = {2, 7};
    struct Time t2;  // результат
    struct Time expected_res = {1, 2};  // ожидаемый результат для тестов
    
    // печать времени в 24-часовом формате
    print_time(t1);     // 22:55
    print_time(dt);     // 02:07

    // проверяем работу функции time2min
    int mm = time2min(dt);  // 2:07
    assert(mm == 127);

    // проверяем работу функции min2time
    struct Time t = min2time(127);
    print_time(t);                  // 02:07

    // сравниваем структуры 
    assert(is_equal(min2time(127), dt));

    // проверяем сложение структур
    t2 = add(t1, dt);
    print_time(t2);
    assert(is_equal(t2, expected_res));

    return 0;
}

// печать hh:mm
void print_time(struct Time t) {
    printf("%02d:%02d\n", t.h, t.m);
}

// переводим время в минуты Time -> min
int time2min(struct Time t) {
    return t.h * 60 + t.m;
}

// mm -> h, m
struct Time min2time(int mm) {
    struct Time res;    // объявили res типа struct Time
    res.m = mm % 60;    // вычислили значение res
    res.h = mm / 60 % 24;
    return res;         // вернули res
}

// сравнение структур Time
int is_equal(struct Time t1, struct Time t2) {
    // return t1.h == t2.h && t1.m == t2.m;
    int res = 1;
    if (t1.h != t2.h)
        res = 0;
    if (t1.m != t2.m)
        res = 0;
    return res;
}

// сложение структур Time, t1 + t2
struct Time add(struct Time t1, struct Time t2) {
    int mmres = time2min(t1) + time2min(t2);    // всего минут с 0:00
    return min2time(mmres);  // из минут во время и возвращаем время
}