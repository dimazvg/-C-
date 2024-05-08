/* center Центр прямоугольника
Прямоугольник со сторонами параллельными осям Х и Y задан координатами 
    верхней левой (xlt,ylt) и правой нижней точки (xrb, yrb).
Найти координаты центра прямоугольника. Гарантируется, что это будет точка в целых координатах.
Написать и использовать функцию, которая по координатам левой верхней и правой нижней точки находит координаты центра.
    void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);
*/
#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main() {
    int xlt, ylt, xrb, yrb, xc, yc;
    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);
    center(xlt, ylt, xrb, yrb, &xc, &yc);
    printf("%d %d", xc, yc);

    return 0;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc) {
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
}