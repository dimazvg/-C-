/* Напишем функцию, вычисляющую факториал n! (в примере 4!) */
#include <stdio.h>

int fact(int n) 
{
    if (n == 0) return 1;           // условие выхода из рекурсии
    int res = n * fact (n-1);       // из fact вызывается fact - рекурсия
    return res;
}

int main() 
{
    printf("4! = %d\n", fact(4));   // из main вызывается fact
    return 0;
}