/* Zif_romashka: Любит - не любит
Математически угорелая девушка гадает на ромашках о любви. 
Она срывает ромашку, считает лепестки, вычисляет факториал (fn = n * fn-1, где f1 = 1) от количества лепестков. 
Затем подсчитывает сумму цифр полученного числа fn.
Если сумма - простое число, значит ЛЮБИТ, если составное - НЕ ЛЮБИТ.
Девушке попалось поле с ромашками, у которых встречалось все количество лепестков от 1 до (1 ≤ N ≤ 1000) по одному разу.
Написать программу, которая по максимальному числу лепестков в ромашке вычисляет сколько раз встречается результат "ЛЮБИТ".
Входные данные: Целое число (1 ≤ N ≤ 1000 ) - максимальное число лепестков.
Выходные данные: Целое число (сколько раз встречается результат "ЛЮБИТ")
Тестовые данные
Test #1 input
1
Test #1 output
0
Test #2 input
3
Test #2 output
1
*/
#include <stdio.h>

int sum_digit(unsigned long long n);

int main()
{
/*
    int n;
    scanf("%d", &n);
*/
    unsigned long long f = 1;
    for (int i = 1; i <= 30; i++) {
        f *= i;
        printf("%4d! = %20llu, sd = %d\n", i, f, sum_digit(f));
    }

    return 0;
}

int sum_digit(unsigned long long n) {
    int summ = 0;
    while (n > 0) {
        summ += n % 10;
        n /= 10;
    }
    return summ;
}
