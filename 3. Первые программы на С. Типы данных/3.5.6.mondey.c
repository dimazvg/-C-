/* monday Понедельники
В месяце n дней. Первый понедельник наступил в день day.
Сколько в этом месяце понедельников?
Sample Input:  30 4
Sample Output: 4
*/
#include <stdio.h>

int main() {
    int n = 0, day = 0;
    scanf("%d%d", &n, &day);

    int mondey_count = (n - day + 1 + 6) / 7;

    printf("%d", mondey_count);
    
    return 0;
}