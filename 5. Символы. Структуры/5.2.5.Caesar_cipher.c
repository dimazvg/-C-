#include <stdio.h>

#define LEN ('z' - 'a' + 1)

// возвращает букву letter, закодированную шифром Цезаря со сдвигом shift
int code(int letter, int shift) {
    if (shift < 0) shift = LEN + shift;
    return 'a' + (letter - 'a' + shift) % LEN;
}

int main() {
    // читаем по символу
    char c1, c2, c3, c4;    // ASCII-коды символов
    int shift;              // сдвиг шифра Цезаря

    // читаем символы и сдвиг
    printf("input 4 symbols: ");
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
    printf("input shift (key): ");
    scanf("%d", &shift);

    // кодируем символы
    c1 = code(c1, shift);
    c2 = code(c2, shift);
    c3 = code(c3, shift);
    c4 = code(c4, shift);

    // печатаем символы
    printf("output result: %c%c%c%c\n", c1, c2, c3, c4);

    // декодируем символы
    shift = -shift;
    c1 = code(c1, shift);
    c2 = code(c2, shift);
    c3 = code(c3, shift);
    c4 = code(c4, shift);

    // печеатем декодированный текст
    printf("output decode result: %c%c%c%c\n", c1, c2, c3, c4);

    return 0;
}