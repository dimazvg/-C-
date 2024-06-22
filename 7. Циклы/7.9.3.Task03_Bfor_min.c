/* Bfor_min Минимальное число
Дано натуральное число n, потом n целых чисел.
Вычислить и напечатать самое маленькое из них.
Напечатать сначала числа через пробел. На следующей строке напечатать минимальное число.
Sample Input:
3
1 5 -2
Sample Output:
1 5 -2
-2
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int x;
    scanf("%d", &x);
    int min = x;
    printf("%d ", x);
    
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        printf("%d ", x);
        if (x < min) min = x;
    }

    printf("\n%d", min);
    
    return 0;
}