/* примеры использования символов */
#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    c = c - 'A' + 'a';
    
    printf("%c", c);

    return 0;
}