/* пример конструкции if-else с множественным выбором 2 
более лаконичная форма записи консрукции с множественным выбором
*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x == 0) {
        printf("zero\n");
    } else if (x < 0) {
        printf("negative\n");
    } else {
        printf("positive\n");
    }
    
    return 0;
}