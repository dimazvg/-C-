#include <stdio.h>

int main()
{
    // объявить переменные
    int h, m;
    // прочитать входные данные
    scanf("%d%d", &h, &m);
    // вычислить
    int time_minute = h * 60 + m;
    int time_second = time_minute * 60;
    // напечатать результат
    printf("%d\n", time_minute);
    printf("%d", time_second);

    return 0;
}