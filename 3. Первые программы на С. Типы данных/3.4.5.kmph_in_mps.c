/* км/ч в м/с
Дана скорость v в км/ч, найдите скорость в м/с.
Дано: v целое число.
Найти: скорость в метрах в секунду.
Тестовые данные
Sample Input:
72
Sample Output:
20
*/
#include <stdio.h>

int main() {
    int v = 0;  // speed - km per hour
    scanf("%d", &v);

    float v_res = v * 1000 / (float)3600;  // result speed - m per second
    
    printf("%f", v_res);
    
    return 0;
}