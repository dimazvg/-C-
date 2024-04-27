#include <stdio.h> 

int main() {
    int x, y;
    printf("int x, y;\n\n");

    x = 2;
    y = x++ + x++;
    printf("x = 2;\ny = x++ + x++;\ny = %d", y); 
    printf("\n\n");

    x = 2;
    y = ++x + ++x;
    printf("x = 2;\ny = ++x + ++x;\ny = %d", y); 
    printf("\n\n");

    x = 2;
    y = ++x + x++;
    printf("x = 2;\ny = ++x + x++;\ny = %d", y); 
    printf("\n\n");

    x = 2;
    y = x++ + ++x;
    printf("x = 2;\ny = x++ + ++x;\ny = %d", y); 
    printf("\n\n");

    return 0; 
}  