#include <stdio.h> 

int main() {
    int x = (int)0b1111111111111111111111111111111111111111111111111111111111111111, y = 1;
    printf("int x = (int)0b1111111111111111111111111111111111111111111111111111111111111111 = %d\n", x);
    printf("int y = 1\n");
    printf("x + y = %d\n\n", x + y);

    x = 0, y = 1;
    printf("x = %d = %x\n", x, x);
    printf("y = %d\n", y);
    printf("x - y = %d = %x\n\n", x - y, x - y);

    x = -1, y = 1;
    printf("x = %d = %x\n", x, x);
    printf("y = %d = %x\n", y, y);
    printf("x + y = %d = %x\n\n", x + y, x + y);

    unsigned char cu = 255;
    printf("unsigned char cu = %c (%%c) = %u (%%u) = %x (%%x)\n", cu, cu, cu);
    unsigned char cu2 = 1;
    printf("unsigned char cu2 = %c (%%c) = %u (%%u) = %x (%%x)\n", cu2, cu2, cu2);
    unsigned char cu3 = cu + cu2;
    printf("cu + cu2 = %c (%%c) = %u (%%u) = %x (%%x)\n\n", cu3, cu3, cu3);

    char c = 64;
    printf("char c = %c (%%c) = %d (%%d) = %x (%%x)\n", c, c, c);
    char c2 = 100;
    printf("char c2 = %c (%%c) = %d (%%d) = %x (%%x)\n", c2, c2, c2);
    char c3 = c + c2;
    printf("c + c2 = %c (%%c) = %d (%%d) = %x (%%x)\n\n", c3, c3, c3);

    return 0; 
}  