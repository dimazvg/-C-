/* town_clock Часы на башне
Путешественник Бознательный прибыл в город N. 
Колокола часов на городской башне каждый час отбивают столько ударов, сколько соответствует показаниям часовой стрелки. 
Часы имели 12-ти часовой циферблат.
Он хотел увидеть городские часы, но заблудился в городе. Однако он услышал бой часов (bell ударов). 
Он пошел на звук и через некоторое время нашел башню с часами.
Перед тем как найти башню Л.Ю. Бознательный последний раз слышал nBell ударов часов. 
При этом он помнил, что начал свое путешествие после полудня и завершил не позже полуночи.
Требуется написать программу, которая вычисляет общее количество ударов, которые Бознательный слышал пока искал башню, 
включая первый бой часов.
Конструкции if, for, while в программе не использовать!!! 
Входные данные: Два целых числа bell и nBell, записанных через пробел.
Выходные данные: Одно целое число - общее количество ударов, которые Л.Ю. Бознательный слышал пока искал башню, включая первый бой часов.
Sample Input:  1 2
Sample Output: 3
*/
#include <stdio.h>

int main() {
    int bell = 0, nBell = 0;
    scanf("%d%d", &bell, &nBell);
    
    int Sbell = 0, SnBell = 0;  // сумма первых bell и nBell членов арифметической прогрессии
    Sbell = (int)((1 + bell) / 2.0 * bell);
    SnBell = (int)((1 + nBell) / 2.0 * nBell);
    int res = SnBell - Sbell + bell;

    printf("%d", res);
    
    return 0;
}