#include <stdio.h>
#include <math.h>  // для компиляции в Ubuntu нужно использовать флаг -lm в конце

void print_bits_32(unsigned int* n);  // печатаем биты числа длиной но 32 бит
void print_bits_64(unsigned long long int* n);  // печатаем биты числа длиной но 64 бит

int main() {
    float f = 0.15625;
    printf("float f;\n\n");
    printf("f = %f == %e == ", f, f);
    unsigned int* n = (int *) &f;
    print_bits_32(n);
    printf("\n");

    f = M_PI;
    printf("f = M_PI == %f == %e == ", f, f);
    print_bits_32(n);
    printf("\n");

    f = 9999999.999999999;
    printf("f = 9999999.999999999 == %f == %e == ", f, f);
    print_bits_32(n);
    printf("\n");

    f = 111111.111111;
    printf("f = 111111.111111 == %f == %e == ", f, f);
    print_bits_32(n);
    printf("\n\n");

    printf("----------------------------------------\n");
    double fd = 1.0;
    printf("double fd;\n\n");
    printf("fd = %lf == %le == ", fd, fd);
    long long int* n64 = (long long int *) &fd;
    print_bits_64(n64);
    printf("\n");

    fd = 3.0;
    printf("fd = %lf == %le == ", fd, fd);
    print_bits_64(n64);
    printf("\n");

    fd = 9999999.999999999;
    printf("fd = 9999999.999999999 == %lf == %le == ", fd, fd);
    print_bits_64(n64);
    printf("\n");

    fd = 111111.111111;
    printf("fd = 111111.111111 == %lf == %le == ", fd, fd);
    print_bits_64(n64);
    printf("\n");

    return 0;
}

void print_bits_32(unsigned int* n) {  // печатаем биты числа
    unsigned int bit_mask = 1u;
    for (int i = 31; i >= 0; i--) {
        if (i == 30) printf(" ");
        if (i == 22) printf(" ");
        unsigned int res = ((*n) & (bit_mask << i)) >> i;
        if (res) 
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

void print_bits_64(unsigned long long int* n) {  // печатаем биты числа длиной но 64 бит
    unsigned long long bit_mask = 1U;
    for (int i = 63; i >= 0; i--) {
        if (i == 62) printf(" ");
        if (i == 51) printf(" ");
        unsigned long long res = ((*n) & (bit_mask << i)) >> i;
        if (res) 
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
