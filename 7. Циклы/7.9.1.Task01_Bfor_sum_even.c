/* Bfor_sum_even Сумма четных чисел
Дано натуральное число n, потом n целых чисел.
Вычислить и напечатать сумму только четных чисел.
Sample Input:
5
10 5 -2 6 1
Sample Output:
14
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int sum_even = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) sum_even += x;
    }

    printf("%d", sum_even);
    
    return 0;
}