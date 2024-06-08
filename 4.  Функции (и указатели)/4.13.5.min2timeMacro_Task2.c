/* min2timeMacro минуты с полуночи в h, m
Напишите макрос min2time(mm,h,m), который из mm минуты с 0:00 вычисляет часы h и минуты m для циферблата часов.
Использование макроса: min2time(125, hres, mres);
При проверке будет использован этот код: ...
Sample Input:
    135
Sample Output:
    02:15
    03:20
В проверяющую систему сдавать только определение макроса min2time
*/
#include <stdio.h>

#define min2time(mm,h,m) ((h)=((mm)/60%24), (m)=((mm)%60))

int main() {
    int h, m, mm;
    //scanf("%d", &mm);
    mm = 135;
    
    min2time(mm, h, m);
    printf("%02d:%02d\n", h, m);

    min2time(mm+65, h, m);
    printf("%02d:%02d\n", h, m);

    return 0;
}