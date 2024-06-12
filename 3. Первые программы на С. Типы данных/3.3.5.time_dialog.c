#include <stdio.h> 

int main() {
    int hour, min;
    printf("Введите количество часов: ");
    scanf("%d", &hour);
    printf("Введите количество минут: ");
    scanf("%d", &min);

    printf("Всего в минутах %d минут\n", hour * 60 + min);
    printf("Всего в секундах %d секунд\n", (hour * 60 + min) * 60);
    
    return 0;
} 