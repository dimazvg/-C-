/* попробую добавить функции в решение задачи о кнатах, сиклях и галлеонах - файл 4.2.2.... */

#include <stdio.h>

#define GALEON 17   // 1 galleon = 17 sickles
#define SICKLE 29   // 1 sickle = 29 knuts

int money2knats(int g, int s, int k);
void knats2money(int knuts, int* g, int* s, int* k);


int main() {
    int g1, s1, k1;     // кошелек1 - g1 - галлеоны, s1 - сикли, k1 - кнаты
    int g2, s2, k2;     // кошелек2 - g2 - галлеоны, s2 - сикли, k2 - кнаты
    int g, s, k;        // результат - сумма: галлеоны, сикли, кнаты

    // читаем данные
    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    // результат = кошелек 1 + кошелек 2
    int wallet1, wallet2, wallet;  // всего в кнатах в кошельках

    // переводим все в кнаты
    wallet1 = money2knats(g1, s1, k1);
    wallet2 = money2knats(g2, s2, k2);

    // считаем сумму в кнатах
    wallet = wallet1 + wallet2;                    // кошелек результат

    // переводим сумму wallet обратно в кнаты, сикли, галеоны
    knats2money(wallet, &g, &s, &k);

    // печатаем результат
    printf("%d %d %d\n", g, s, k);
    
    return 0;
}

int money2knats(int g, int s, int k) {
    int res = (g * GALEON + s) * SICKLE + k;
    return res;
}

void knats2money(int knuts, int* g, int* s, int* k) {
    *s = knuts / SICKLE;  // из кучи кнатов отложим сикли (большой кучей)
    *k = knuts % SICKLE;  // оставшиеся кнаты - в кошелек
    *g = (*s) / GALEON;  // из кучи сиклей отложим галеоны
    *s = (*s) % GALEON;  // оставшиеся сикли - в кошелек
}