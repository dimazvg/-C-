/* Abmyax Сверим часы 1 - решение с макроконстантами, без magic numbers
Бяксику и Мяксику подарили часы с 12-ти часовым циферблатом. 
Когда они встретились, часы Бяксика показывали hb часов и minb минут, часы Мяксика hm часов и minm минут.
Все часы ходили исправно.
Чтобы часы показывали одинаковое время, 
Бяксик сразу решил перевести их вперед на hbf часов и minbf минут и также переводить каждые nb минут, 
а Мяксик также сразу решил перевести назад на hmb часов и minmb минут и также переводить каждые nm минут. 
    Ни Бякиск, ни Мяксик не переводили часы более чем на 11 часов 59 минут за один раз.
Написать программу, которая выясняет могут ли Бяксик и Мяксик добиться одинаковых показаний часов хотя бы за неделю. 
Если могут, то программа должна напечатать количество дней, часов и минут, за которые им это удалось, если нет, то программы печатает "NO".
-   -   -   -   -   -
Входные данные
    hb:minb nb hbf:minbf
    hm:minm nm hmb:minmb
Первая строка: два целых числа, разделенных ":" (показание часов Бяксика), пробел, целое число не более 60 (через сколько минут он переводит часы), 
    далее два целых числа, разделенных ":" (на сколько часов и минут переводит часы)
Вторая строка: два целых числа, разделенных ":" (показание часов Мяксика), пробел, целое число не более 60 (через сколько минут он переводит часы), 
    далее два целых числа, разделенных ":" (на сколько часов и минут переводит часы)
Выходные данные
    Либо три целых числа в формате dd hh:mm, либо слово NO.
-   -   -   -   -   -
Sample Input:
    0:0 1 0:1
    0:4 1 0:1
Sample Output:
    0 00:01
*/
#include <stdio.h>

#define TOTAL_TIME_MIN (7 * 24 * 60)
#define HOUR_IN_DAY 24
#define MIN_IN_HOUR 60
#define HOUR_IN_CLOCK 12

#define OK 1
#define NO 0

int GCD(int a, int b);

int main()
{
    int hb, minb, nb, hbf, minbf;
    scanf("%d:%d %d %d:%d", &hb, &minb, &nb, &hbf, &minbf);
    int hm, minm, nm, hmb, minmb;
    scanf("%d:%d %d %d:%d", &hm, &minm, &nm, &hmb, &minmb);

    int time_b = hb * MIN_IN_HOUR + minb;
    int time_m = hm * MIN_IN_HOUR + minm;
    int min_step = GCD(nb, nm);
    int min_step_b = hbf * MIN_IN_HOUR + minbf;
    int min_step_m = -(hmb * MIN_IN_HOUR + minmb);

    int ans = NO;
    int time = 0;
    while (time < TOTAL_TIME_MIN) {
        if (time % nb == 0) {
            time_b += min_step_b;
            time_b %= HOUR_IN_CLOCK * MIN_IN_HOUR;
        }
        if (time % nm == 0) {
            time_m += min_step_m;
            if (time_m < 0) time_m += HOUR_IN_CLOCK * MIN_IN_HOUR;
            time_m %= HOUR_IN_CLOCK * MIN_IN_HOUR;
        }
        if (time_b == time_m) {
            ans = OK;
            break;
        }
        time += min_step;
    }

    if (ans) {
        int ans_day = time / (HOUR_IN_DAY * MIN_IN_HOUR);
        int ans_hour = (time / MIN_IN_HOUR) % HOUR_IN_DAY;
        int ans_min = time % MIN_IN_HOUR;
        printf("%d %02d:%02d", ans_day, ans_hour, ans_min);
    } else
        printf("NO");
    
    return 0;
}

int GCD(int a, int b) {
     int ost;
     do {
          ost = a % b;
          a = b;
          b = ost;
     } while (ost != 0);

     return a;
}