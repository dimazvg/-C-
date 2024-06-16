/* пример подсчёта факториала внутри конструкции for */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, res;
    for(i = 1, res = 1; i <= n; res *= i, i++) ;

    printf("%d! = %d\n", n, res);

    return 0;
}