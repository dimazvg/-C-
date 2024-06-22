/* Высокие студенты
У студентов измерили рост в сантиметрах (целое число) и записали числа на одной строке через пробел. 
Напечатайте сколько студентов измерили и сколько человек было выше 170 сантиметров?
Sample Input:
    155 172 180 170 164 160
Sample Output:
    6 2
*/
#include <stdio.h>

int main()
{
    int count = 0;
    int count170 = 0;
    int h;
    while(scanf("%d", &h) == 1) {
        count++;
        if (h > 170) count170++;
    }
    
    printf("%d %d", count, count170);
    
    return 0;
}