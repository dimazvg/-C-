/* Возведение в натуральную степень с помощью рекурсии */
#include <stdio.h>

long long int a_power_n(int a, int n);
long long int a_power_n_quick(int a, int n);

int main() {
    int a = 2, n = 10;
    printf("%d^%d = %lld\n", a, n, a_power_n(a, n));
    printf("%d^%d quick = %lld\n", a, n, a_power_n_quick(a, n));
    a = 10, n = 18;
    printf("%d^%d = %lld\n", a, n, a_power_n(a, n));
    printf("%d^%d = %lld\n", a, n, a_power_n_quick(a, n));

    return 0;
}


long long int a_power_n(int a, int n) {
    if (n == 1) return a;
    return a * a_power_n(a, n-1);
}

long long int a_power_n_quick(int a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 1) {
        return a * a_power_n_quick(a, n - 1);
    } else {
        return a_power_n_quick(a, n / 2) * a_power_n_quick(a, n / 2);
    }
}