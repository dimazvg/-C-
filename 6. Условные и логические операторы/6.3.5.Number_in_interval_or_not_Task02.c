/* Принадлежит (-∞; 37) U [146; ∞)
Напишите программу. Она читает целое число, печатает его и печатает YES, если число принадлежит (-∞; 37) U [146; ∞). Иначе печатает NO
Sample Input:
    7
Sample Output:
    7 YES
*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d ", x);

    // тут нужно написать код
    if (x < 37 || x >= 146)
        printf("YES");
    else
        printf("NO");

    return 0;
}