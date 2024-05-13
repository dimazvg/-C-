#include <stdio.h>
#include <math.h>  // собираем с ключом -lm

#define NANF 0.0f / 0.0f
#define cube(x) (x)*(x)*(x)
#define sum(a,b)    ((a)+(b))
#define QUADP1(a,b,c) ((-(b) + sqrt((b) * (b) - 4 * (a) * (c))) / \
                                    (2.0 * (a)))
#define QUADP2(a,b,c) ((-(b) - sqrt((b) * (b) - 4 * (a) * (c))) / (2.0 * (a)))

#define DETERMINANT(a,b,c)  sqrt((b) * (b) - 4 * (a) * (c))
#define QUADP(a, b, c) ((-(b) + DETERMINANT(a,b,c)) / (2 * (a)))
#define QUADM(a, b, c) ((-(b) - DETERMINANT(a,b,c)) / (2 * (a)))

int main() {
    printf("NAN: %f\n", NANF);
    printf("cube %d = %d\n", 2, cube(2));
    printf("cube %s = %d\n", "(1+2)", cube(1+2));
    printf("cube %f = %f\n", 3.1f, cube(3.1f));
    printf("sum %d + %d = %d\n", 2, 4, sum(2, 4));
    printf("(sum %d + %d) * 3 = %d\n", 2, 4, sum(2, 4) * 3);
    printf("x^2 + 5x + 4 = 0\n");
    printf("\tx1 = %g, x2 = %g\n", QUADP1(1,5,4), QUADP2(1,5,4));
    printf("\tx1 = %g, x2 = %g\n", QUADP(1,5,4), QUADM(1,5,4));
    printf("%s %d: %s\n", __FILE__, __LINE__, __FUNCTION__);
    
    return 0;
}