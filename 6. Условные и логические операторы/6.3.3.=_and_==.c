/* лперации = и == в логическом выражении в if */
#include <stdio.h>

int main()
{
    int x = 5;

    if (x == 5)
        printf("AAA");
    if (x = 3)
        printf("BBB");
    if (x = 0)
        printf("ZZZ");
    printf("\n%d\n", x);

    return 0;
}
