#include <stdio.h>

void hi();
float foo(float a, float b, float c, float x);  // axx + bx + c


int main() {
    hi();       // call hi
    float y1, y2, y3;
    y1 = foo(1, 2, 3, 0.5);             // call foo
    y2 = foo(-3.1, 5.16, -0.01, 10);    // call foo
    printf("%f %f\n", y1, y2);

    return 0;
}

void hi() {
    printf("Hello!\n");
    return ;  // можно не писать
}

float foo(float a, float b, float c, float x) {
    float res;
    res = a * x * x + b * x + c;

    return res;
}