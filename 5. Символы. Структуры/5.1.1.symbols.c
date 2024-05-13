/* примеры использования символов */
#include <stdio.h>
#include <ctype.h>  // fot tolower(char) and toupper(char)

int main() {
    char c1 = 'a', c2 = 'b', c3 = 99;
    printf("alphabet symbols: \t%c,  %c,  %c, ...\n", c1, c2, c3);
    printf("alphabet symbols codes: %u, %u, %u, ...\n", c1, c2, c3);

    char c = '7';
    int digit = '7' - '0';
    printf("char \'7\' to digit: %d\n", digit);

    c1 = 'w';
    c2 = c1 - 'a' + 'A';
    printf("to upper 1: %c %c\n", c1, c2);
    c2 = toupper(c1);  // from ctype.h
    printf("to upper 2: %c %c\n", c1, c2);
    
    c1 = 'W';
    c2 = c1 - 'A' + 'a';
    printf("to lower 1: %c %c\n", c1, c2);
    c2 = tolower(c1);
    printf("to lower 2: %c %c\n", c1, c2);

    return 0;
}