/* Напишем рекурсивную функцию нахождения НОД двух чисел, используя алгоритм Евклида */
#include <stdio.h>

int GCD(int a, int b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b == 0) return a;
    return GCD(a % b, b);
}

int main() {
    printf("GCD(123, 21) = %d\n", GCD(123, 21));
    printf("GCD(21, 125) = %d\n", GCD(21, 125));
    printf("GCD(121, 44) = %d\n", GCD(121, 44));
    return 0;
}