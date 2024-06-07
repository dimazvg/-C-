/* С начала суток (0:00) прошло mm минут
    нужно написать функцию
        void min2time(int mm, int* ph, int* pm);
    которая вычисляет, сколько прошло часов ph и минут pm с начала суток
*/

#include <stdio.h>

void min2time(int mm, int* ph, int* pm);  // h - часов, m - минут

int main() {
    int mm, h, m;
    scanf("%d", &mm);

    min2time(mm, &h, &m);
    
    printf("%02d:%02d\n", h, m);

    return 0;
}

void min2time(int mm, int* ph, int* pm) {
    *ph = mm / 60 % 24;
    *pm = mm % 60;
}