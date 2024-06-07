/* min2time
Task03 min2time - вызов функции: 
    Уже есть функция void min2time(int mm, int * ph, int * pm) которая минуты с 0:00 переводит в часы и минуты на 24-часовом циферблате.
    Нужно послать только функцию main. В нее дописать ОДНУ строку - вызов функции min2time.
    В проверяющую систему в main добавляем строку min2time(mm, &h, &m);
    Sample Input:
        123
    Sample Output:
        02:03
Task04 min2time - реализация функции:
С начала суток (0:00) прошло mm минут
    нужно написать функцию
        void min2time(int mm, int* ph, int* pm);
    которая минуты с 0:00 переводит в часы и минуты на 24-часовом циферблате.
    Sample Input:
        123
    Sample Output:
        02:03
*/

#include <stdio.h>

void min2time(int mm, int* ph, int* pm);  // h - часов, m - минут

int main() {
    int mm, h, m;
    scanf("%d", &mm);

    min2time(mm, &h, &m);
    
    printf("%02d:%02d\n", h, m);

    return 0;
}

void min2time(int mm, int* ph, int* pm) {
    *ph = mm / 60 % 24;
    *pm = mm % 60;
}