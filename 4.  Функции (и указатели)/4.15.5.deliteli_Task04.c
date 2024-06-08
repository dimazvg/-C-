/* deliteli Делители числа
Написать рекурсивную функцию для печати простых сомножителей числа a по степеням.
    void simpleFactors(unsigned int a, unsigned int last, unsigned int n);
        - a - положительное целое число, ( 2 ≤ a ≤ 10^9 ), которое раскладывается на простые сомножители,
        - last - предполагаемый сомножитель для проверки делимости (вначале 2),
        - n - степень сомножителя в числе (вначале 0).
Рекомендуем так же написать функцию для печати сомножителя:
    void printFactor(unsigned int last, unsigned int n);
        Входные данные: целое число (2 ≤ a ≤ 10 ^9)
        Выходные данные: сомножители печатаются через пробел с наибольшего сомножителя,
            степень сомножителя указывается после знака ^, 
            если сомножитель в степени 1, то степень не указывается.
Input	Output
8	    2^3
105	    7 5 3
12	    3 2^2
Посылать только simpleFactors и необходимые для ее работы функции, если вы их написали. Функцию main НЕ посылать.
*/
#include <stdio.h>

void simpleFactors(unsigned int a, unsigned int last, unsigned int n);
void printFactor(unsigned int last, unsigned int n);
//int isSimple(unsigned int n, unsigned int d);

int main() {
    unsigned int a = 8;  // 2^3
    // scanf("%u", &a);
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 20;  // 5 2^2
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 105;  // 7 5 3
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 12; // 3 2^2
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 7;  // 7
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 2;  // 2
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 21168;  // 7^2 3^3 2^4
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 207025;  // 13^2 7^2 5^2
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    a = 232848;  // 11 7^2 3^3 2^4
    printf("%u: ", a);
    simpleFactors(a, 2, 0);
    printf("\n");

    return 0;
}

void simpleFactors(unsigned int a, unsigned int last, unsigned int n) {
    if (a % last == 0)
        simpleFactors(a / last, last, n + 1);
    else if (last <= a)
        simpleFactors(a, last + 1, 0);
    if (a % last != 0 && n != 0) 
        printFactor(last, n);

    return ;
}

void printFactor(unsigned int last, unsigned int n) {
    if (n == 0) return ;
    if (last == 1 || n == 1)
        printf("%d ", last);
    else
        printf("%u^%u ", last, n);
}

/*
// проверка на простоту числа n, стартовый d должен быть равен 2
int isSimple(unsigned int n, unsigned int d) {
    if (n <= 1) return 0;
    if (d < 2) return 0;
    if (d > n / 2) return 1;
    if (n % d == 0) 
        return 0;
    else
        isSimple(n, d+1);
}
*/