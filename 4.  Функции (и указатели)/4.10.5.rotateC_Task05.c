/* rotateC Поворот вокруг центра
Прямоугольник со сторонами, параллельными осям, задан координатами двух точек - левой верхней и правой нижней.
Написать и использовать функцию
    void rotateC(int *x1, int *y1, int *x2, int *y2);
которая поворачивает прямоугольник на 90 градусов вокруг его центра (пересечения диагоналей).
Гарантируется, что тесты будут оставлять прямоугольник после поворота в целых координатах. Ничего округлять не нужно.
Input format: 4 целых числа через пробел - xlt ylt xrb yrb - координаты вершин прямоугольника до поворота.
Output format: 4 целых числа через пробел - xlt ylt xrb yrb - координаты левой верхней и правой нижней вершины прямоугольника 
    после поворота.
Sample Input:
    0 6 10 4
Sample Output:
    4 10 6 0
*/
#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2);
void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);
void dxdy(int x1, int y1, int x2, int y2, int *dx, int *dy);

int main() {
    int xlt, ylt, xrb, yrb;
    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);

    rotateC(&xlt, &ylt, &xrb, &yrb);

    printf("%d %d %d %d", xlt, ylt, xrb, yrb);

    return 0;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc) {
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
}

void dxdy(int x1, int y1, int x2, int y2, int *dx, int *dy) {
    *dx = (x2 - x1) / 2;
    *dy = (y1 - y2) / 2;
}

void rotateC(int *x1, int *y1, int *x2, int *y2) {
    int dx, dy;
    dxdy(*x1, *y1, *x2, *y2, &dx, &dy);
    int dx2 = dy;
    int dy2 = dx;
    int xc, yc;
    center(*x1, *y1, *x2, *y2, &xc, &yc);
    *x1 = xc - dx2;
    *y1 = yc + dy2;
    *x2 = xc + dx2;
    *y2 = yc - dy2;
}