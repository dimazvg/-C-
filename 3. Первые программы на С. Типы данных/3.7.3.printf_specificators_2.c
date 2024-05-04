#include <stdio.h>

int main() {
    int x = 13;
    printf("input integer decimal number 13\n");
    printf("int x = 13\n");
    printf("%%d or %%i x - ");
    printf("%d or %i\n\n", x, x);     // 13 or 13

    unsigned int y = 013;             // присвоили число 13, оно читается как восьмеричное
    printf("input integer number 13 like octal number in variable unsigned int y\n");
    //scanf("%o", &y);                // ввели число 13, оно читается как восьмеричное
    printf("unsigned int y = 013\n");
    printf("%%o or %%d y - ");
    printf("%o %d\n", y, y);        // 13 11, потому что 13 восьмеричное это 11 десятичное или b шестнадцатеричное
    printf("%%x and %%X y - ");
    printf("%x %X\n", y, y);        // b B, можете управлять печатать большими буквами или маленькими
    
    //scanf("%x", &y);                // можно вводить большие буквы или маленькие, fb12 или FB12.

    printf("\n");

    float xf = 3.14;
    printf("float xf = %f\n", xf);
    printf("spec e: %e\n", xf);
    printf("spec g: %g\n", xf);
    printf("spec a: %a\n", xf);
    printf("\n");

    double xd = 3.14;
    printf("double xd = %lf\n", xd);
    printf("spec e: %e\n", xd);
    printf("spec g: %g\n", xd);
    printf("spec a: %a\n", xd);    
    return 0;
}