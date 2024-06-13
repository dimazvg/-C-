/* рекурсивный подсчёт n! (факториал числа n)*/
#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d! = %d\n", n, fact(n));

    return 0;
}

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n-1);
}