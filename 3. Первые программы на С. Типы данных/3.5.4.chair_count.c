/* 
*/
#include <stdio.h>

int main() {
    float a = 0.0, b = 0.0;  // стороны прямоугольника
    scanf("%f%f", &a, &b);
    float square = a * b;  // площадь прямоугольника со сторонами a и b
    printf("%g", square);
    
    return 0;
}