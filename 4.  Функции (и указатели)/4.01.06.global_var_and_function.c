#include <stdio.h>

int x;

void foo();

int main() {
    foo();
    foo();
    printf("x = %d\n", x);

    return 0;
}

void foo() {
    x++;
}