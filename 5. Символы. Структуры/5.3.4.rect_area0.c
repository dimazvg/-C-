/* rect_area0 Площадь прямоугольника - 1.
Прямоугольник на плоскости XY со сторонами, параллельным осям, задан x и y координатами левой верхней точки и его размерами. 
Для его хранения объявлена структура Rect (ниже в программе)
Напишите функцию, которая возвращает площадь прямоугольника a.
    int area(struct Rect a);
*/

#include <stdio.h>

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

int area(struct Rect a) {
    return a.width * a.height;
}

int main() {
    struct Rect a;
    scanf("%d%d%d%d", &a.x, &a.y, &a.width, &a.height);
    printf("area: %d\n", area(a));

    return 0;
}