/* int_palindr палиндром числа
Дано целое десятичное число 1 <= N <= 10^9?, последняя цифра не 0.
Число, записанное десятичными цифрами является палиндромом если его можно одинаково прочитать как справа налево, так и наоборот.
Написать программу, которая выясняет является ли данное число палиндромом (печатать YES) или нет (печатать NO).
-  -  -  -  -  -
Число	Палиндром?
123321	YES
12321	YES
12	    NO
-  -  -  -  -  -
Sample Input:
    123321
Sample Output:
    YES
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int n_temp = n;
    int n_reverse = 0;
    while (n_temp > 0) {
        n_reverse = n_reverse * 10 + n_temp % 10;
        n_temp /= 10;
    }
    
    if (n == n_reverse)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}