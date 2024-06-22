/* for_60 Сколько раз встретилась цифра в числе?
Даны через пробел цифра d и целое число в десятичной записи k. 0 <= k <= 2^32
 Напечатайте d, k и сколько раз цифра d входит в десятичную запись числа k?
Sample Input:
    3 13234533
Sample Output:
    3 13234533 4
*/
#include <stdio.h>

int main()
{
    int d;
    scanf("%d", &d);
    unsigned int k;
    scanf("%u", &k);
    
    unsigned int k2 = k;
    int count_d = 0;
    while (k2 > 0) {
        if (k2 % 10 == d) count_d++;
        k2 /= 10;
    }
    
    printf("%d %u %d", d, k, count_d);
    
    return 0;
}