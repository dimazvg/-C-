/* Тест 3. Что будет напечатано? Ответ: 3 3 */
#include <stdio.h>

void foo() {
    int x = 2;
    x = x + 1;
    printf("%d ", x);
}

int main() {
    foo();
    foo();

    return 0;
}