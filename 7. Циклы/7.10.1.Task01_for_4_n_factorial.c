/* for_4 n!
Дано  0 <= n <= 12. Вычислите n!.
Sample Input:
3
Sample Output:
6
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int f = 1;
    for (int i = 1; i <= n; i++) 
        f *= i;

    printf("%d", f);
    
    return 0;
}