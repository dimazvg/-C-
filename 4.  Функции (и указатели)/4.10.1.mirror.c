/* mirror Отобразить точку
Написать и использовать функцию
    void mirror(int *px, int *py);
которая зеркально отображает точку с координатами (x,y) относительно оси Y.
*/
#include <stdio.h>

void mirror(int *px, int *py);

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    mirror(&x, &y);
    printf("%d %d", x, y);

    return 0;
}

void mirror(int *px, int *py) {
    *px = - (*px);
}