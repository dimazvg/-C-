/* Возведение числа a в степенть n 
Простой алгоритм    a^12 = a * a^11, a^11 = a * a^10, ...
Умный алгоритм      a^2n = a^n * a^n, a^(2n+1) = a * a^2n

Можно ли реализовать умный алгоритм с помощью циклов, не прибегая к рекурсии?
*/
#include <stdio.h>

unsigned long long a_pow_n_1(int a, int n);  // Простой алгоритм возведения числа a в степень n рекурсией
unsigned long long a_pow_n_2(int a, int n);  // Простой алгоритм возведения числа a в степень n циклом
unsigned long long a_pow_n_3(int a, int n);  // Умный алгоритм возведения числа a в степень n рекурсией
//unsigned long long a_pow_n_4(int a, int n);  // Умный алгоритм возведения числа a в степень n циклом

int main()
{
    int a, n;
    scanf("%d%d", &a, &n);
    if (a < 0 || n < 0) {
        printf("INPIT ERROR\n");
        return 0;
    }
    if (a == 0) {
        printf("%d in power %d is 0\n", a, n);
        return 0;
    }

    unsigned long long res = a_pow_n_1(a, n);
    printf("1: %d^%d = %llu\n", a, n, res);
    res = a_pow_n_2(a, n);
    printf("2: %d^%d = %llu\n", a, n, res);
    res = a_pow_n_3(a, n);
    printf("3: %d^%d = %llu\n", a, n, res);

    return 0;
}

// Простой алгоритм возведение числа a в степень n рекурсией
unsigned long long a_pow_n_1(int a, int n) {
    if (n == 0) return 1;
    return a * a_pow_n_1(a, n-1);
}

// Простой алгоритм возведение числа a в степень n циклом
unsigned long long a_pow_n_2(int a, int n) {
    unsigned long long res = 1;

    for (int i = 0; i < n; i++)
        res *= a;
    
    return res;
}

// Умный алгоритм возведения числа a в степень n рекурсией
unsigned long long a_pow_n_3(int a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        unsigned long long temp_res = a_pow_n_3(a, n / 2);
        return temp_res * temp_res;
    } else {
        return a * a_pow_n_3(a, n - 1);
    }
}
