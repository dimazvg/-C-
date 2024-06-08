/* ipow Возведение в степень
система
    a^(2n) = a^n * a^n
    a^(2n+1) = a * a^(2n)
Реализуйте этот алгоритм возведения в натуральную степень. Убедитесь, что реализация не ухудшила ожидаемую эффективность.
Напишите функцию
    long long int ipow(long long int a, unsigned int n, unsigned int * depth);
Она вычисляет a^n. В depth запишите глубину рекурсивного вызова функции.
    - Для n=0 функция сразу возвращает 1.
    - Для n=1 функция сразу возвращает a.
Функция ipow должна быть реализована так, чтобы для нескольких вызовов подряд она записывала в depth корректное значение:
Sample Input:
    3 12
Sample Output:
    531441 5
*/
#include <stdio.h>

long long int ipow(long long int a, unsigned int n, unsigned int * depth);

int main() {
    int d = 7;
    long long int res = ipow(2, 32, &d);
    printf("ipow(2, 32, &d) == %lld, d = %d\n", res, d);
    res = ipow(3, 12, &d);
    printf("ipow(3, 12, &d) == %lld, d = %d\n", res, d);

    return 0;
}


long long int ipow(long long int a, unsigned int n, unsigned int * depth) {
    if (n == 0) {
        *depth = 1;
        return 1;
    }
    if (n == 1) {
        *depth = 1;
        return a;
    }
    if (n % 2 == 0) {
        long long int x = ipow(a, n / 2, depth);
        (*depth)++;
        return x * x;
    } else {
        long long int x = ipow(a, n - 1, depth);
        (*depth)++;
        return a * x;
    }
}