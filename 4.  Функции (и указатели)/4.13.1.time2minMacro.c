/* time2minMacro h, m в минуты с полуночи
Напишите макрос time2min(h,m), который из часов и минут вычисляет минуты с 0:00.
Использование макроса: mm = time2min(1, 25);
При проверке будет использован следующий код: ...
*/
#include <stdio.h>

#define time2min(h,m) ((h)*60+(m))

int main() {
    int h, m, mm;
    //scanf("%d:%d", &h, &m);
    h = 2, m = 15;
    
    mm = time2min(h, m);
    printf("%d\n", mm);

    mm = time2min(h, m)*2;
    printf("%d\n", mm);

    mm = time2min(h+1, m+5);
    printf("%d\n", mm);

    return 0;
}