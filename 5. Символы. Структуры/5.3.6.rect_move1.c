/*  ect_move1 Сдвиг прямоугольника на dx
Прямоугольник на плоскости XY со сторонами, параллельным осям, задан x и y координатами левой верхней точки и его размерами. 
Для его хранения объявлена структура Rect (ниже в программе) 
Напишите функцию, которая двигает прямоугольник на dx. В функцию передается указатель на этот прямоугольник p.
    void move(struct Rect * p, int dx);
*/

#include <stdio.h>

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

void move(struct Rect * p, int dx) {
    p->x = p->x + dx;
}

int main() {
    struct Rect p;
    scanf("%d%d%d%d", &p.x, &p.y, &p.width, &p.height);
    int dx;
    scanf("%d", &dx);

    printf("%d %d %d %d + %d = ", p.x, p.y, p.width, p.height, dx);
    move(&p, dx);
    printf("%d %d %d %d\n", p.x, p.y, p.width, p.height);

    return 0;
}