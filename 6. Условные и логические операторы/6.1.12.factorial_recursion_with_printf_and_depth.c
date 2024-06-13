/* рекурсивный подсчёт n! (факториал числа n) с отладочной печатью и глубиной вызова */
#include <stdio.h>

int fact(int n, int depth);

int main()
{
    int n;
    scanf("%d", &n);

    printf("main: %d! = %d\n", n, fact(n, 1));

    return 0;
}

int fact(int n, int depth) {
    printf("%-*c call fact(%d)\n", depth, '>', n);
    if (n == 0) {
        printf("%-*c 0! = 1\n", depth, '>');
        return 1;
    }
    int res = n * fact(n-1, depth+1);
    printf("%-*c %d! = %d\n", depth, '>', n, res);
    return res;
}