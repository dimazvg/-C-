#include <stdio.h>

void foo();

int main() {
    foo();
    foo();

    return 0;
}

void foo() {
    int x = 2;
    x++;
    printf("x = %d\n", x);
}