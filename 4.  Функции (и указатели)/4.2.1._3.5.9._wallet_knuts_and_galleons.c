/* Галеоны, сикли, кнаты  
> задача из прошлой темы  
У магов свои деньги. В магической Великобритании это кнаты (knut), сикли (sickle) и галеоны (galleon). 
    - 1 галеон = 17 сиклей, 
    - 1 сикль = 29 кнатов *
В одном кошельке g1 галеонов s1 сиклей и k1 кнатов.
В другом кошельке g2 галеонов s2 сиклей и k2 кнатов.
Сколько всего денег в кошельках?
Представьте эту сумму, используя минимальное количество монет.
Решение:
    - прочитать входные данные
    - перевести деньги в кнаты в каждом кошельке
    - вычислить сумму в кнатах в двух кошельках
    - переведём сумму в геллеоны, сикли и кнаты
    - напечатаем результат
используем для перевода константы через define
*/
#include <stdio.h>

#define GALEON 17   // 1 galleon = 17 sickles
#define SICKLE 29   // 1 sickle = 29 knuts

int main() {
    int g1, s1, k1;     // кошелек1
    int g2, s2, k2;     // кошелек2
    int g, s, k;        // результат - сумма

    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    // результат = кошелек 1 + кошелек 2
    int t1, t2, t;  // всего в кнатах в кошельках

    // переводим все в кнаты
    t1 = (g1*GALEON + s1)*SICKLE + k1;      // кошелек1
    t2 = (g2*GALEON + s2)*SICKLE + k2;      // кошелек2

    // считаем сумму
    t = t1 + t2;                    // кошелек результат

    // переводим t обратно в кнаты, сикли, галеоны
    s = t / SICKLE; // из кучи кнатов отложим сикли (большой кучей)
    k = t % SICKLE; // оставшиеся кнаты - в кошелек
    g = s / GALEON; // из кучи сиклей отложим галеоны
    s = s % GALEON; // оставшиеся сикли - в кошелек

    // печатаем результат
    printf("%d %d %d\n", g, s, k);
    
    return 0;
}