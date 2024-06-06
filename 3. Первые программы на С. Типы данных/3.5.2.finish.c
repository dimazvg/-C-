/* Где финиш?
Длина круга беговой дорожки на стадионе round метров. Студенты должны пробежать total метров.
Напечатать:
    - Сколько полных кругов должны пробежать студенты?
    - В скольких метрах от старта надо поставить финиш?
Все числа целые.
Sample Input:
    200 1030
Sample Output:
    5 30
*/
#include <stdio.h>

int main() {
    int round = 0;      // длина круга дорожки
    int total = 0;      // должны пробежать студенты
    scanf("%d%d", &round, &total);

    int res1 = total / round;
    int res2 = total % round;

    printf("%d %d", res1, res2);
    
    return 0;
}