#include <stdio.h>

int main() {
    char y, x;
    scanf("%c%hhd", &y, &x);
    
    printf("%c%hhd %c%hhd %c%hhd %c%hhd", y - 1, x, y, x + 1, y + 1, x, y, x - 1);

    return 0;
}