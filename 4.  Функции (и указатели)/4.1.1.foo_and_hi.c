#include <stdio.h>

void hi();
void hi2(int group);
float foo(float a, float b, float c, float x);  // axx + bx + c


int main() {
    hi();       // call hi
    hi2(951);
    hi2(954);
    hi2(978);
    hi2(916);
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

void hi2(int group) {
    printf("Hello, group %d!\n", group);
}

float foo(float a, float b, float c, float x) {
    float res;
    res = a * x * x + b * x + c;

    return res;  // return a * x * x + b * x + c;
}