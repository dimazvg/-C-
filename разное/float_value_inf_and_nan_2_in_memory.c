#include <stdio.h>

void print_bits(unsigned int* n);  // печатаем биты числа

int main() {
    float f;
    int* n = (int *) &f;

    f = 0.0;
    printf("f = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = 1.0;
    printf("f = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = -1.0;
    printf("f = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = 1367821.812389;
    printf("f = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = -1367821.812389;
    printf("f = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = 15.0 / 0.0;
    printf("f = 15.0 / 0.0 = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = -15.0 / 0.0;
    printf("f = -15.0 / 0.0 = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = 0.0 / 0.0;
    printf("f = 0.0 / 0.0 = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    f = -f;
    printf("f = -f = %f\nbits: ", f);
    print_bits(n);
    printf("\n");

    return 0;
}

void print_bits(unsigned int* n) {  // печатаем биты числа
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
