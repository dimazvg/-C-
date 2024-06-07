/* move Сдвиг точки
Написать и использовать функцию
    void move(int *px, int *py, int dx, int dy);
которая сдвигает точку с координатами (x,y) на dx и dy.
Input format: 4 целых числа через пробел - x y dx dy - координаты точки до отображения и параметры сдвига.
Output format: 2 целых числа через пробел - x y - координаты точки после отображения.
Sample Input:
    10 5 3 4
Sample Output:
    13 9
*/
#include <stdio.h>

void move(int *px, int *py, int dx, int dy);

int main() {
    int x, y, dx, dy;
    scanf("%d%d%d%d", &x, &y, &dx, &dy);

    move(&x, &y, dx, dy);
    
    printf("%d %d", x, y);

    return 0;
}

void move(int *px, int *py, int dx, int dy) {
    *px = *px + dx;
    *py = *py + dy;
}