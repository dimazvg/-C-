#include <stdio.h>

int main() {
    int a = 3, b = 7, t;
    printf("a = %d, b = %d\n", a, b);
    t = a;  // a = 3, b = 7, t = 3
    a = b;  // a = 7, b = 7, t = 3
    b = t;  // a = 7, b = 3, t = 3
    printf("a = %d, b = %d\n\n", a, b);

    printf("------ User test ----- \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    t = a;
    a = b;
    b = t;
    printf("a = %d, b = %d\n\n", a, b);
    
    return 0;
}