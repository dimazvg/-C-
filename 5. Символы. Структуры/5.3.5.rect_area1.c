/*  rect_area1 Площадь прямоугольника - 2.
Прямоугольник на плоскости XY со сторонами, параллельным осям, задан x и y координатами левой верхней и правой нижней вершин. 
Для его хранения объявлена структура Rect (ниже в программе) 
Напишите функцию, которая возвращает площадь прямоугольника a.
    int area(struct Rect a);
*/

#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

int area(struct Rect a) {
    return (a.rb.x - a.lt.x) * (a.lt.y - a.rb.y);
}

int main() {
    struct Rect a;
    scanf("%d%d%d%d", &a.lt.x, &a.lt.y, &a.rb.x, &a.rb.y);
    printf("area: %d\n", area(a));

    return 0;
}