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

    return 0; 
}  