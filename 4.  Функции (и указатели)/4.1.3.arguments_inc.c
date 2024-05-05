#include <stdio.h>

void inc(int x);

int main() {
    int a = 3;
    inc(a);
    inc(a);
    printf("%d\n", a);  // a не изменила значение

    return 0;
}

void inc(int x) {
    x = x + 1;
}