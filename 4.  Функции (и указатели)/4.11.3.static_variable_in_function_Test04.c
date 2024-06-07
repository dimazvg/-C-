/* Тест 4. Что будет напечатано? Ответ: 1 2 */
#include <stdio.h>

void foo() {
    static int x;  // неявная инициализация, x == 0
    x = x + 1;
    printf("%d ", x);
}

int main() {
    foo();
    foo();
    
    return 0;
}