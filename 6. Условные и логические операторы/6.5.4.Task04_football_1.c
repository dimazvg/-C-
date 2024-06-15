/* футбол-1
Матч Shan United - Yadanarbon окончился со счетом a:b.
Команда Shan United получает:
    - 2 очка, если победила (a > b)
    - 1 очко, если ничья (a = b)
    - 0 очков, если проиграла (a < b)
Дан счет матча. Напечатать счет матча и на следующей строке сколько очков получила команда Shan United.
Sample Input:
    5:4
Sample Output:
    5:4
    2
*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d:%d", &a, &b);
    
    printf("%d:%d\n", a, b);
    
    int score = 0;
    if (a > b)
        score = 2;
    else if (a == b)
        score = 1;
        
    printf("%d", score);
    
    return 0;
}