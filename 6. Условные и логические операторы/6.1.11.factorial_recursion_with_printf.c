/* рекурсивный подсчёт n! (факториал числа n) с отладочной печатью */
#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("main: %d! = %d\n", n, fact(n));

    return 0;
}

int fact(int n) {
    printf("call fact(%d)\n", n);
    if (n == 0) {
        printf("0! = 1\n");
        return 1;
    }
    int res = n * fact(n-1);
    printf("%d! = %d\n", n, res);
    return res;
}