#include <stdio.h>

int main() {
    int x;
    printf("sizeof x:\t%zd\n", sizeof x);            // 4 в моей системе и на repl.it
    printf("sizeof(1+2):\t%zd\n", sizeof(1 + 2));   // 4 в моей системе и на repl.it
    printf("sizeof 3.5:\t%zd\n", sizeof 3.5);       // 8 в моей системе и на repl.it
    printf("sizeof(char):\t%zd\n", sizeof(char));   // 1 всегда

    printf("\n");
    printf("sizeof(char*):\t\t%zd\n", sizeof(char*));
    printf("sizeof(double*):\t%zd\n", sizeof(double*));
    printf("sizeof(int*):\t\t%zd\n", sizeof(int*));
    printf("sizeof(void*):\t\t%zd\n", sizeof(void*));
    printf("sizeof(int**):\t\t%zd\n", sizeof(int**));
    printf("sizeof(int***):\t\t%zd\n", sizeof(int***));

    return 0;
}