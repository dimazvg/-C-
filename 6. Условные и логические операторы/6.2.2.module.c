/* модуль числа */
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x < 0)
        x = -x;
    
    printf("модуль числа: %d\n", x);

    return 0;
}