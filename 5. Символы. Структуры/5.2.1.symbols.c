#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);                            // нажмем на клавиатуре клавишу Q и далее Enter
    printf("символ %c, ASCII код %d\n", c, c);  // символ Q, ASCII код 81
    printf("\n");

    int x;          // да, именно int
    getchar();      // для чтения enter рпи прошлом вводе
    x = getchar();  // нажмем на клавиатуре клавишу Q и далее Enter
    putchar(x);     // Q

    return 0;
}