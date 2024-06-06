#include <stdio.h> 

int main() {
    int x, y;           // объявили переменные x и y типа int
    scanf("%d", &x);    // ввели число и записали его в х
    scanf("%d", &y);    // ввели число и записали его в y
    printf("%d + %d = %d\n", x, y, x+y);    // печатаем ответ
    
    return 0;
} 