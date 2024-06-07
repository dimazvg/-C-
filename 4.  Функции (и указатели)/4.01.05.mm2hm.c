/* С начала суток прошло mm минут.
Нужно написать функцию, которая вычисляет, сколько прошло часов и минут с начала суток.
*/
#include <stdio.h>

void mm2hm(int mm, int* ph, int* pm);  // h - часов, m - минут

int main() {
    int h, m;
    mm2hm(135, &h, &m);
    
    printf("time: %02d:%02d\n", h, m);

    return 0;
}

void mm2hm(int mm, int* ph, int* pm) {
    *ph = mm / 60;
    *pm = mm % 60;
}