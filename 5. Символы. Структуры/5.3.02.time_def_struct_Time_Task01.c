/* Task01 time_def Определение структуры Time
Для хранения и представления показаний часов напишите структуру с именем Time и целочисленными полями h и m.
Посылать только объявление структуры.
Не забудьте про ;.
Программа main уже дана (ниже)
Sample Input:
    02:34
Sample Output:
    02:34
*/
#include <stdio.h>

struct Time {
    int h;
    int m;
};

int main() {
    struct Time t;
    scanf("%d:%d", &t.h, &t.m);
    printf("%02d:%02d\n", t.h, t.m);
    return 0;
}