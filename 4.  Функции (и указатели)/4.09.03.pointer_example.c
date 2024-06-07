/* пример использования указателя */
#include <stdio.h>

int main()
{
    int x;
    int * px = &x;
    scanf("%d", px);    // тут & не нужен, в px указывает на переменную типа int

    printf("%d\n", x+1);
    
    return 0;
}