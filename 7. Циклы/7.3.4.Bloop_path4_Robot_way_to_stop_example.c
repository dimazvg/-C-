/* Пример: Bloop_path4 путь до остановки
Робот сделал несколько шагов.
Первый шаг робота L сантиметров.
Каждый следующий шаг меньше на k сантиметров.
Если шаг робота ≤ 0, то робот останавливается (больше не делает шагов).
Программа вычисляет путь робота и количество шагов. Условие продолжения цикла изменилось на "пока робот идет":
*/
#include <stdio.h>

// функция вычисляет следующий шаг после step.
int next_step(int step, int k)
{
    step = step - k;    // следующий шаг на k меньше
    if (step < 0)       // назад не идем!
        step = 0;       // топчемся на месте
    return step;
}

int main()
{
    int L;      // первый шаг робота
    int k;      // следующий шаг на k меньше

    int i;      // закончилось шагов / сделано шагов
    int step;   // длина 1 шага
    int path;   // прошли всего с начала

    // читаем входные данные (что дано)
    scanf("%d", &L);
    scanf("%d", &k);

    // робот готовится шагать:
    i = 0;      // робот еще не сделал ни одного шага
    step = L;   // первый шаг будет L
    path = 0;   // робот еще не прошел ничего

    while (step > 0) {  // ПОКА РОБОТ ИДЕТ
        path += step;   // прошёл еще step см
        i++;            // закончили шаг
        printf("За %d шаг прошли %d, всего %d\n", i, step, path);
        step = next_step(step, k);  // готовимся к следующему шагу, планируем сколько пройти
    }

    // робот закончил шаги, больше никуда не идем, печатаем ответ
    printf("За %d шагов робот прошел %d см\n", i, path);

    return 0;
}
