/* подсчёт n-го числа последовательности Фибрначчи
последовательность: 1, 1, 2, 3, 5, 8, 13, 21, ...
подсчёт членов ведём от нулевого 
*/
#include <stdio.h>

int fib(int n) {
    if (n == 0 || n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    printf("fib(4) = %d\n", fib(4));
    printf("fib(5) = %d\n", fib(5));
    printf("fib(6) = %d\n", fib(6));
    printf("fib(7) = %d\n", fib(7));
    return 0;
}