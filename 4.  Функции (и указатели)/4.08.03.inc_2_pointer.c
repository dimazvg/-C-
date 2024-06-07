#include <stdio.h>

void inc(int * px) {
    *px = *px + 1;  // проще (*px)++ разыменовывание обязательно в скобках
}                       // т.к. операция ++ приоритетнее операции разыменовывания *


int main() {
    int a = 5;
    inc(&a);
    inc(&a);
    printf("%d\n", a);  // 7

    return 0;
}