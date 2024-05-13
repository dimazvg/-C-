#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    int digit = c - '0';
    printf("char \'%c\' to digit: %d\n", c, digit);

    return 0;
}