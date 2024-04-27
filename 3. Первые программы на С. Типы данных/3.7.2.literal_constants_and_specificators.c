#include <stdio.h> 

int main() {
    int x = 1024;   // Decimal number
    printf("int x = 1024\n");
    printf("%%d x = %d\n\n", x);

    x = 077;        // Octal number - prefix 0 
    printf("x = 077; (octal number - prefix 0)\n");
    printf("%%d x = %d, %%o x = %o, %%X x = %Xh\n\n", x, x, x);

    x = 0b1111;        // Binary number - prefix 0b 
    printf("x = 0b1111; (binary number - prefix 0b)\n");
    printf("%%d x = %d, %%o x = %o, %%X x = %Xh\n\n", x, x, x);

    x = 0xABCF;        // Hexadecimal number - prefix 0x - от hex
    printf("x = 0xABCF; (hexadecimal number - prefix 0x)\n");
    printf("%%d x = %d, %%o x = %o, %%X x = %Xh\n\n", x, x, x);

    return 0; 
}  