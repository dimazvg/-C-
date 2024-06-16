/* GCD - greatest common division
НОД - наибольший общий делитель
Алгоритм Евклида для нахождения НОД
НОД(123, 21)
123 % 21 = 18
21 % 18 = 3
18 % 3 = 0
     ^
НОД(123, 21) = 3
*/
#include <stdio.h>

int main()
{
     int a, b, ost;
     scanf("%d%d", &a, &b);

     do {
          ost = a % b;
          a = b;
          b = ost;
     } while (ost != 0);

     printf("НОД = %d\n", a);

     return 0;
}