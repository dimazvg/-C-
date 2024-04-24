#include <stdio.h>

int main() {
    printf("--- division ---\n");
    printf("7.0 / 2.0 = %.1f\n", 7.0 / 2.0);
    printf("12.0 / 2.0 = %.1f\n", 12.0 / 2.0);
    int n = 7 / 2;
    printf("7 / 2 = %d\n", n);
    n = 1 / 2;
    printf("1 / 2 = %d\n", n);
    n = -1 / 2;
    printf("-1 / 2 = %d\n", n);
    n = -7 / 3;
    printf("-7 / 3 = %d\n", n);
    n = -7 / -3;
    printf("-7 / -3 = %d\n", n);
    n = 7 / -3;
    printf("7 / -3 = %d\n", n);

    printf("-- remainder --\n");
    n = 1 % 2;
    printf("1 %% 2 = %d\n", n);
    n = 0 % 2;
    printf("0 %% 2 = %d\n", n);
    n = -1 % 2;
    printf("-1 %% 2 = %d\n", n);
    n = 7 % 3;
    printf("7 %% 3 = %d\n", n);
    n = -7 % 3;
    printf("-7 %% 3 = %d\n", n);
    n = 7 % -3;
    printf("7 %% -3 = %d\n", n);
    n = -7 % -3;
    printf("-7 %% -3 = %d\n", n);

    //printf("0.5 %% 1 = %d\n", 0.5 % 1);  // - такое не работает

    return 0;
}