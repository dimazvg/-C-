/* Task07 rect_area1 Площадь прямоугольника - 2.
Прямоугольник на плоскости XY со сторонами, параллельным осям, задан x и y координатами левой верхней точки и его размерами. 
Для его хранения объявлена структура Rect (ниже в программе) 
Напишите функцию, которая двигает прямоугольник на dx. В функцию передается указатель на этот прямоугольник p.
    void move(struct Rect * p, int dx);
Посылать только реализацию функции.
Sample Input:
    -7 5 12 8
    -6
Sample Output:
    -7 5 12 8 + -6 = -13 5 6 8
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

void move(struct Rect * p, int dx) {
    p->lt.x += dx;
    p->rb.x += dx;
}

int main() {
    struct Rect p;
    scanf("%d%d%d%d", &p.lt.x, &p.lt.y, &p.rb.x, &p.rb.y);
    int dx;
    scanf("%d", &dx);

    printf("%d %d %d %d + %d = ", p.lt.x, p.lt.y, p.rb.x, p.rb.y, dx);
    move(&p, dx);
    printf("%d %d %d %d\n", p.lt.x, p.lt.y, p.rb.x, p.rb.y);

    return 0;
}