/* int_2 Сколько можно сделать столов?
1 стол = 1 столешница и 4 ножки
Из 4 ножек делают 1 стол.
Дано целое число ножек N. 
Напечатать сколько из них можно сделать столов.
Sample Input: 
    14
Sample Output: 
    3
*/
#include <stdio.h>

int main() {
    int n = 0;  // количество ножек
    scanf("%d", &n);

    int table = n / 4;  // количество столов

    printf("%d", table);
    
    return 0;
}