/* пример использования псевдонима типов typedef со структурами 2 */
#include <stdio.h>

typedef struct sTime {
    int hour;
    int minute;
    int second;
} Time;

void print_time(Time t) {
    printf("%d hours, %d minutes, %d seconds\n", t.hour, t.minute, t.second);
}

int time2min(Time t) {
    return (t.hour * 60 + t.minute);
}

Time min2time(int mm) {
    Time t = {0, 0, 0};
    t.hour = mm / 60 % 24;
    t.minute = mm % 60;
    return t;
}

int main() {
    Time clock = {12, 34, 5};
    print_time(clock);

    int mm = time2min(clock);
    printf("It's %d minutes\n", mm);

    Time clock2 = min2time(mm);
    printf("clock2 from %d minuts to time format: \n\t", mm);
    print_time(clock2);

    return 0;
}