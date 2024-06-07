/* Тест 5. Что будет напечатано? Ответ: 3 4 */
#include <stdio.h>

void foo() {
    static int x = 2;  // явная инициализация
    x = x + 1;
    printf("%d ", x);
}

int main() {
    foo();
    foo();
    
    return 0;
}