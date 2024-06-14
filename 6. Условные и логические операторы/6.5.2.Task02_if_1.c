/* if_1 - минимум из 2 чисел
Даны 2 целых числа.
Напечатайте числа через пробел.
Напечатайте минимальное из этих чисел на следующей строке.
Sample Input:
    3 17
Sample Output:
    3 17
    3
*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    
    printf("%d %d\n", a, b);
    
    if (a < b)
        printf("%d", a);
    else
        printf("%d", b);
    
    return 0;
}