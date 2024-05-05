#include <stdio.h>

int summ(int x, int y);

int main() {
    int a = 2, b = 3;
    printf("%d %d %d\n", a, b, summ(a, b));  // 2 3 5
    a = summ(a, b);
    printf("%d %d %d\n", a, b, summ(a, b));  // 5 3 8
    b = summ(a, b);
    printf("%d %d %d\n", a, b, summ(a, b));  // 5 8 13

    return 0;
}

int summ(int x, int y) {
    return x + y;
}