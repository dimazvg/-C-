/* пример на значение NaN и INF в типе float */
#include <stdio.h>

int main() {
    float f = 15.0 / 0.0;
    printf("1. float f = 15.0 / 0.0 = ");
    printf("%f\n\n", f);

    f = -3.14 / 0.0;
    printf("2. f = -3.14 / 0.0 = ");
    printf("%f\n\n", f);

    f = 0.0 / 0.0;
    printf("3. f = 0.0 / 0.0 = ");
    printf("%f\n\n", f);

    f = -f;
    printf("4. f = -f = ");
    printf("%f\n\n", f);

    return 0;
}