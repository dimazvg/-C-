/* подсчёт n-го числа Фибоначчи (отсчёт ведём с 0) с помощью рекурсии 
номер:                  0  1  2  3  4  5  6  7
последовательность:     1  1  2  3  5  8 13 21 ...
*/
#include <stdio.h>

int fib(int n);

int main()
{
    printf("fib(5) = %d\n", fib(5));

    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("fib(%d) = %d\n", n, fib(n));

    return 0;
}

int fib(int n) {
    if (n == 0 || n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}