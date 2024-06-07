/* 6ticket Печать номера билета наоборот
Дано целое шестизначное число (6 цифр). 
Написать функцию 
    void print_revers(int x);
Она печатает 6 цифр числа x в обратном порядке.
*/
#include <stdio.h>

void print_revers(int x);

int main() {
    int n = 123456;
    printf("print_reverse(%d) == ", n);
    print_revers(n);

    n = 100002;
    printf("print_reverse(%d) == ", n);
    print_revers(n);

    n = 403029;
    printf("print_reverse(%d) == ", n);
    print_revers(n);

    return 0;
}

void print_revers(int x) {
    int res = x % 10;
    x /= 10;

    res = res * 10 + x % 10;
    x /= 10;

    res = res * 10 + x % 10;
    x /= 10;

    res = res * 10 + x % 10;
    x /= 10;

    res = res * 10 + x % 10;
    x /= 10;

    res = res * 10 + x % 10;
    x /= 10;

    printf("%d\n", res);

    return ;
}

