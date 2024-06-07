#include <stdio.h>

int inc(int x) {
    return x + 1;
}

int main () {
    int a = 3;
    a = inc(a);
    a = inc(a);
    printf("%d\n", a);  // 5
}