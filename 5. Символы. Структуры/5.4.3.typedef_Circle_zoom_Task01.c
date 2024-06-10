/* Определите структуру, описывающую окружность с центром с координатами x и y типа int и радиусом r типа double так, 
    чтобы было корректен прототип функции:
        Circle zoom(Circle c, int k);
Функцию zoom реализовывать НЕ НУЖНО. Часть кода уже написана в проверяющей системе
*/
// НИЖЕ МОЙ КОД
#include <stdio.h>
typedef struct {
    int x;
    int y;
    double r;
} Circle;

// ---- далее код уже определен в проверяющей системе:
Circle zoom(Circle c, int k);

int main()
{
    Circle c = {1, 2, 3};
    Circle z = zoom(c, 5);
    printf("%.0lf\n", z.r);
    return 0;
}

Circle zoom(Circle c, int k)
{
    Circle res = c;
    res.r *= k;
    return res;
}