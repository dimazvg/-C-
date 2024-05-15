/*  struct_line_0rotR Поворот
Написать функцию
    void rotRLine(struct Line * t)
Она поворачивает отрезок на плоскости XY на 90 градусов по часовой стрелке вокруг точки (0,0).
Напечатайте полученный отрезок и его длину с точностью до 3 десятичных знаков.
Входные данные: 4 целых числа через пробел - x, y координаты точки - целые числа через пробел.
Выходные данные: x y координаты концов отрезка и его длина с точностью до десятичных знаков.
структуры и функции заданы (смотрите ниже в программе)
*/
#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;    // начало отрезка
    Point b;    // конец отрезка
    float len;  // длина отрезка
} Line;

float distance(Point a, Point b);   // расстояние между точками
void scanPoint(Point * p);
void scanLine(Line * t);
void printPoint(Point p);
void printLine(Line t);
void rotRLine(Line * t);    // поворот на 90 градусов по часовой стрелке

int main() {
    Line t;

    scanLine(&t);
    rotRLine(&t);
    printLine(t);

    return 0;
}

// расстояние между точками
float distance(Point a, Point b) {
    int dx = b.x - a.x;
    int dy = b.y - a.y;
    return sqrt(dx*dx + dy*dy);
}

void scanPoint(Point * p) {
    int x, y;
    scanf("%d%d", &x, &y);
    p->x = x;
    p->y = y;
}

void scanLine(Line * t) {
    scanPoint(&t->a);
    scanPoint(&t->b);
    t->len = distance(t->a, t->b);
}

void printPoint(Point p) {
    printf("%d %d ", p.x, p.y);
}

void printLine(Line t) {
    printPoint(t.a);
    printPoint(t.b);
    printf("%.3f\n", t.len);
}

// поворот на 90 градусов по часовой стрелке
void rotRLine(Line * t) {
    int x1 = t->a.x;
    int y1 = t->a.y;
    int x2 = t->b.x;
    int y2 = t->b.y;

    t->a.x = y1;
    t->a.y = -x1;
    t->b.x = y2;
    t->b.y = -x2;

    t->len = distance(t->a, t->b);
}