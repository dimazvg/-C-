#include <stdio.h>

int main() {
    char x, y;
    scanf("%c%hhd", &x, &y);
    
    printf("%c%hhd", x, y + 1);

    return 0;
}