/* напишем функцию swap, которая заменяет значения двух переменных через указатели 
Task01: В проверяющую систему добавляем только вызов функции swap.
Task02: В проверяющую систему добавляем только реализацию функции swap.
*/
#include <stdio.h>

void swap(int * px, int * py);

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}

void swap(int * px, int * py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}