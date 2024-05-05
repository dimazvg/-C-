#include <stdio.h>

void inc(int* px);

int main() {
    int a = 3;
    inc(&a);
    inc(&a);
    printf("%d\n", a);  // a увеличится на 2

    return 0;
}

void inc(int* px) {
    *px = *px + 1;  // (*x)++
}