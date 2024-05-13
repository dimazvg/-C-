#include <stdio.h>

int main() {
    // читаем ASCII-коды
    int decimal = getchar();        // ASCII-код символа 4
    int one = getchar();            // ASCII-код символа 7

    // какие цифры они кодируют?
    decimal = decimal - '0';        // 4
    one = one - '0';                // 7

    // получаем из цифр двухзначное число
    int number = decimal * 10 + one;   // 47

    // теперь можно умножить его на 2 и убедиться, что результат умножения правильный
    printf("%d * 2 = %d\n", number, number * 2);


    return 0;
}