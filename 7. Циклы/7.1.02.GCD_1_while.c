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
     int a, b;
     scanf("%d%d", &a, &b);

     int ost = a % b;
     while (ost != 0) {
          ost = a % b;
          a = b;
          b = ost;
     }

     printf("НОД = %d\n", a);

     return 0;
}