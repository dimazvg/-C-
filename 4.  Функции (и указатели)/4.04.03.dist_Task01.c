/* Отрезок на плоскости задан двумя точками: координаты (x1, y1) и (x2, y2) - целые числа.
Написать функцию
    float dist(int x1, int y1, int x2, int y2)
    {
        код пишем с отступом в 1 табуляцию
    }
Она вычисляет расстояние между этими точками.
Для вычисления корня x используйте функцию sqrt из math.h, не забывайте добавлять -lm при компиляции.
Посылать только реализацию функции dist.
Sample Input:
    3 0 0 4
Sample Output:
    5.000
*/
#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);

int main() 
{
   int x1, y1, x2, y2;            // координаты точек
   float len;                     // длина

   scanf("%d%d", &x1, &y1);       // прочитали числа
   scanf("%d%d", &x2, &y2);

   len = dist(x1, y1, x2, y2);    // вызываем функцию dist

   printf("%.3f\n", len);         // напечатать длину

   return 0;
}

float dist(int x1, int y1, int x2, int y2) 
{
    return sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
}