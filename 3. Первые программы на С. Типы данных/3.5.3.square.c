/* Площадь прямоугольника
Даны длины сторон прямоугольника.
Напечатайте его площадь.
Sample Input: 2.5 3
Sample Output: 7.5
*/
#include <stdio.h>

int main() {
    float a = 0.0, b = 0.0;  // стороны прямоугольника
    scanf("%f%f", &a, &b);
    float square = a * b;  // площадь прямоугольника со сторонами a и b
    printf("%g", square);
    
    return 0;
}