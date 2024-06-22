/* Bfor_min Минимальное число
Дано натуральное число n, потом n целых чисел.
Вычислить и напечатать самое маленькое из них.
Sample Input:
3
1 5 -2
Sample Output:
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
    
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        if (x < min) min = x;
    }

    printf("%d", min);
    
    return 0;
}