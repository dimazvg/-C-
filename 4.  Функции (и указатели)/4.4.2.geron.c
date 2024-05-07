/* geron Формула Герона
Можно вычислить площадь треугольника s по трем его сторонам.
Скопируйте из предыдущей задачи функцию 
    float dist(int x1, int y1, int x2, int y2);
    которая вычисляет расстояние между 2 точками.
Напишите функцию
    float area(int x1, int y1, int x2, int y2, int x3, int y3);
которая вычисляет площадь треугольника по 3 точкам по формуле  S = sqrt(p*(p-a)*(p-b)*(p-c)), где 
    p - полупериметр, а a, b, c - длины сторон треугольника.
В функции main напечатайте найденную площадь с точностью до 3 десятичных знаков. Используйте %.3f
*/
#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
    int x1, y1, x2, y2, x3, y3;    // координаты точек
    float S;                       // площадь треугольника

    // читаем числа
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);
    
    S = area(x1, y1, x2, y2, x3, y3);    // вызываем площадь

    printf("%.3f\n", S);         // напечатать площадь

   return 0;
}

float dist(int x1, int y1, int x2, int y2) {
    return sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    float a, b, c;  // стороны треугольника
    a = dist(x1, y1, x2, y2);
    b = dist(x1, y1, x3, y3);
    c = dist(x2, y2, x3, y3);
    float p = (a + b + c) / 2.0;
    float S = sqrtf(p * (p - a) * (p - b) * (p - c));

    return S;
}