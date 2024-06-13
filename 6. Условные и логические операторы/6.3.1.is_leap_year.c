/* Сложные условия
Задача: проверить високосный год или нет. 
Год является високосным, если он делится на 4, но не делится на 100. Если год делится на 400, то он все равно високосный.
Напишем функцию, int is_leap_year(int year), которая по аргументу year возвращает или истину, или ложь. 
Как ложь мы будем возвращать 0. А как истину договоримся возвращать 1.
*/
#include <stdio.h>

int is_leap_year(int year);

int main()
{
    int year;
    scanf("%d", &year);

    int res = is_leap_year(year);
    if (res)
        printf("year %d is leap\n", year);
    else
        printf("year %d is not leap\n", year);

    return 0;
}


int is_leap_year(int year) 
{
    if (year % 400 == 0) 
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}
