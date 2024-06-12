#include <stdio.h>
#include <math.h>  // для компиляции в Ubuntu нужно использовать флаг -lm в конце

int main() {
    float x;
    printf("float x;\n");
    printf("x \t ceil(x) \t floor(x) \t round(x) \t (int)x\n");
    x = 2.1;
    printf("%g \t  %g \t\t  %g \t\t  %g \t\t  %d\n", x, ceil(x), floor(x), round(x), (int)x);
    x = 2.7;
    printf("%g \t  %g \t\t  %g \t\t  %g \t\t  %d\n", x, ceil(x), floor(x), round(x), (int)x);
    x = 2.5;
    printf("%g \t  %g \t\t  %g \t\t  %g \t\t  %d\n", x, ceil(x), floor(x), round(x), (int)x);
    x = -2.1;
    printf("%g \t %g \t\t %g \t\t %g \t\t %d\n", x, ceil(x), floor(x), round(x), (int)x);
    x = -2.7;
    printf("%g \t %g \t\t %g \t\t %g \t\t %d\n", x, ceil(x), floor(x), round(x), (int)x);
    x = -2.5;
    printf("%g \t %g \t\t %g \t\t %g \t\t %d\n", x, ceil(x), floor(x), round(x), (int)x);

    return 0;
}