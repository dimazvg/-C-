/* mirror_seg Отобразить отрезок
Написать и использовать функцию
    void mirror_seg(int *px1, int *py1, int *px2, int *py2);
которая зеркально отображает отрезок с концами (x1,y1) и (x2,y2) относительно оси X.
Input format: 4 целых числа через пробел - x1 y1 x2 y2 - координаты концов отрезка до отображения.
Output format: 4 целых числа через пробел - x1 y1 x2 y2 - координаты концов отрезка после отображения.
Sample Input:
    3 2 7 -1
Sample Output:
    3 -2 7 1
*/
#include <stdio.h>

void mirror_seg(int *px1, int *py1, int *px2, int *py2);

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    mirror_seg(&x1, &y1, &x2, &y2);
    
    printf("%d %d %d %d", x1, y1, x2, y2);

    return 0;
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2) {
    *py1 = - (*py1);
    *py2 = - (*py2);
}