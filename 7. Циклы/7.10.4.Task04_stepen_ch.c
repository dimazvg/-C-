/* stepen_ch Степень числа
Дано целое число n, которое может оказаться k-ой ЦЕЛОЙ степенью другого ЦЕЛОГО числа.
            n = a^k
            a = (a1 * a2 * ... * at)
Написать программу, для выяснения для какого другого целого числа данное n является k-ой ЦЕЛОЙ степенью.
Входные данные: два целых числа через пробел 0 < n < 2^64 - 1 и 0 < k < 10.
Выходные данные: отладочная печать - поиск сомножителей.
    Первая строка - наименьший сомножитель корня a1, частное от деления на a1^k первый сомножитель в степени k.
    Вторая строка -- второй предполагаемый сомножитель корня a2, частное от деления n на (a1 * a2)^k первый и второй сомножителя в степени k.
    И так далее до тех пор пока могут быть найдены сомножители степени k.
    Последняя строка: если k - степень числа n, печатается корень, если нет -1
Пример 1
Входные данные: 36 2
То есть просят найти разложение числа 36 на квадраты чисел.
    36 делится на 2 в квадрате, получаем частное 9. Печатаем 2 9.
    9 делится на 3 в квадрате, получаем частное 1. Печатаем 3 1.
    Так как частное 1, то процесс поиска делителей закончен, 36 раскладывается на квадрат 2 и квадрат 3, то есть 36 это квадрат 6. Печатаем 6.
Пример 2
Входные данные: 128 5
То есть просят найти разложение числа 128 на пятые степени какого-то числа.
    128 делится на 2 в 5 степени, получаем частное 4. Печатаем 2 4.
    4 уже не является никаким целым числом в 5 степени. Разложение невозможно. Печатаем -1.
Sample Input:
    36 2
Sample Output:
    2 9
    3 1
    6
*/
#include <stdio.h>

unsigned long long power(int n, int k) {
    unsigned long long res = 1;
    for (int i = 0; i < k; i++)
        res *= n;
    return res;
}

int main()
{
    unsigned long long n;
    scanf("%llu", &n);
    int k;    // степень делителя
    scanf("%d", &k);
    
    int res_d = 1;    // результирующий делитель, n делится на res_d^k
    int d = 2;        // проверяемый делитель, в начале равен 2
    unsigned long long d_pow_k = power(d, k);    // предполагаемый делитель в степени k
    while (n > 1 && d < n && d_pow_k <= n) {
        d_pow_k = power(d, k);
        if (n % d_pow_k == 0) {
            n = n / d_pow_k;
            printf("%d %llu\n", d, n);
            res_d *= d;
        } else {
            d++;
        }
    }
    
    if (n == 1)
        printf("%d", res_d);
    else
        printf("-1");
    
    return 0;
}
