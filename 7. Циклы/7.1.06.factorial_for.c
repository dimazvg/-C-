/* пример подсчёта факториала внутри конструкции for */
#include <stdio.h>

int main()
{
    int f, i, n;
    scanf("%d", &n);

    for(i = 1, f = 1; i <= n; f *= i, i++) ;

    printf("%d! = %d\n", n, f);

    return 0;
}