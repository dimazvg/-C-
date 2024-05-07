#include <stdio.h>

void inc(int x) {
    x = x + 1;  // внешний x не меняется
}

int main() {
    int a = 5;
    inc(a);
    inc(a);
    printf("%d\n", a);  // 5

    return 0;
}