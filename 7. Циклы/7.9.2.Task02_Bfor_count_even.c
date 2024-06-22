/* Bfor_count_even Сколько четных чисел
Дано натуральное число n, потом n целых чисел.
Вычислить и напечатать сколько из них четных чисел.
Sample Input:
5
10 5 -2 6 1
Sample Output:
3
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int count_even = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) count_even++;
    }

    printf("%d", count_even);
    
    return 0;
}