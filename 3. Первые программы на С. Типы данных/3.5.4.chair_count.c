/* int_3 Сколько стульев
Площадь комнаты - s.
Длина одной стороны комнаты - w.
Ширина стула ch.
Вычислить сколько стульев res можно поставить у ДРУГОЙ стороны комнаты.
Sample Input: 
    5 1 0.5
Sample Output: 
    10
*/
#include <stdio.h>

int main() {
    float s = 0.0, w = 0.0, ch = 0.0;
    scanf("%f%f%f", &s, &w, &ch);

    float w2 = s / w;           // длина второй стороны комнаты
    int res = (int) (w2 / ch);  // стульев

    printf("%d", res);
    
    return 0;
}