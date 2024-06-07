/* пишем функцию swap для обмена значениями двух переменых 
    Написанная функция меняет местами значения переданных аргументов, 
    но не самих внешних переменных a и b 
*/
#include <stdio.h>

void swap(int x, int y) {
    int t = x;
    x = y;
    y = t;
    printf("x=%d y=%d ", x, y);
}

int main() {
    int a = 3, b = 7;
    swap(a, b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}