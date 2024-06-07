#include <stdio.h>

void inc(int x) {
    x = x + 1;
}

int main() {
    int x;
    x = 3;
    inc(x);
    inc(x);
    printf("%d\n", x);

    return 0;
}