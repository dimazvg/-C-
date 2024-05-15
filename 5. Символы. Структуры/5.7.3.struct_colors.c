/*  struct_colors Цвета RGB
Один из форматов RGB: все цвета получаются смешением красного (red), зеленого (green) и синего (blue) различной интенсивности. 
Интенсивность можно описать структурой Color (ниже в программе).
Требуется написать функции:
// считать RGB-формат с консоли
    Color getColor();
// перевод из RGB-формата в число
    unsigned long long convertToHTML(Color);
// преобразование числа цвета в RGB-формат
    Color convertToRGB(unsigned long long);
// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue:
// 255 128 222
// Печатать только числа через пробел и \n в конце!!!
    void printRGB(Color);
// печать цвета в HTML-формате и \n в конце.
// Примеры: FFA902 0AA3FF
    void printHTML(Color);
В Си спецификаторы %x и %X - для вывода числа в шестнадцатеричном формате, %d, %u - в десятичном.
Функция main дана (ниже в программе).
*/
#include <stdio.h>

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

Color getColor();  // считать RGB-формат из терминаоа
unsigned long long convertToHTML(Color);  // перевод из RGB-формата в число
Color convertToRGB(unsigned long long);  // преобразование числа цвета в RGB-формат
void printRGB(Color);  // печать цвета в RGB-формате
void printHTML(Color);  // печать цвета в HTML-формате и \n в конце.

int main() {
    Color z, z2;
    unsigned long long html;

    z = getColor();
    printRGB(z);

    html = convertToHTML(z);
    printf("%llu\n", html);
    printHTML(z);

    z2 = convertToRGB(html);
    printRGB(z2);

    return 0;
}

// считать RGB-формат из терминаоа
Color getColor() {
    Color color;
    scanf("%hhu%hhu%hhu", &color.red, &color.green, &color.blue);
    return color;
}

// перевод из RGB-формата в число
unsigned long long convertToHTML(Color z) {
    return (z.red * 256 + z.green) * 256 + z.blue;
}

// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long n) {
    Color z;
    z.blue = n % 256;
    z.green = n / 256 % 256;
    z.red = n / 65536;
    return z;
}

// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
    // red green blue:
    // 255 128 222
    // Печатать только числа через пробел и \n в конце!!!
void printRGB(Color z) {
    printf("%hhu %hhu %hhu\n", z.red, z.green, z.blue);
}

// печать цвета в HTML-формате и \n в конце.
    // Примеры: FFA902 0AA3FF
void printHTML(Color z) {
    printf("%02hhX%02hhX%02hhX\n", z.red, z.green, z.blue);
}